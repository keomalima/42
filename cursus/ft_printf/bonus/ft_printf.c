/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:21:34 by keomalima         #+#    #+#             */
/*   Updated: 2024/10/17 17:02:16 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_arg(char *format)
{
	int	i;

	i = 0;
	while (*format)
	{
		if (*format == '%' && *(format + 1) != '%')
			i++;
		format++;
	}
	return (i);
}

int	ft_str_len(char *format, t_printf *item)
{
	int	len;

	len = 0;
	while (*format)
	{
		while (*format != '%' && *format)
		{
			format++;
			len++;
		}
		if (*format == '%' && *format)
		{
			while (*format && *format != item->specifier)
				format++;
			if (*format == '%')
			{
				len++;
				format++;
			}
		}
		if (*format)
			format++;
	}
	return (len);
}

void	ft_str_loop(char *format, t_printf **itens, va_list *args, int *len)
{
	int	i;

	i = 0;
	while (*format)
	{
		while (*format != '%' && *format)
			ft_putchar_fd(*format++, 1);
		if (*format == '%' && *format)
		{
			itens[i] = malloc(sizeof(t_printf));
			if (!itens[i])
				return ;
			ft_struct_parse(format + 1, itens[i]);
			*len = ft_specifier_check(args, itens[i]);
			while (*format && *format != itens[i]->specifier)
				format++;
			if (*format == '%')
				format++;
			i++;
		}
		if (*format)
			format++;
	}
	itens[i] = NULL;
}

int	ft_printf(const char *format, ...)
{
	t_printf	**itens;
	va_list		args;
	int			i;
	int			len;

	i = 0;
	va_start(args, format);
	itens = malloc (sizeof(t_printf *) * ft_count_arg((char *)format) + 1);
	if (!itens)
		return (0);
	ft_str_loop((char *)format, itens, &args, &len);
	len += ft_str_len((char *)format, itens[i]);
	va_end(args);
	return (len);
}
