/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:47:08 by keomalima         #+#    #+#             */
/*   Updated: 2024/10/18 16:03:56 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle_specifier(char spec, va_list *args, int *len)
{
	if (spec == 'd' || spec == 'i' || spec == 'u')
		ft_print_int(spec, args, len);
	else if (spec == 'c' || spec == 's')
		ft_print_char(spec, args, len);
	else if (spec == 'x' || spec == 'X')
		ft_print_hex(spec, args, len);
	else if (spec == 'p')
		ft_print_ptr(args, len);
}

void	ft_parse_format(const char *format, va_list *args, int *len)
{
	while (*format)
	{
		while (*format != '%' && *format)
		{
			ft_putchar_fd(*format++, 1);
			(*len)++;
		}
		if (*format == '%')
		{
			if (*(format + 1) == '%')
			{
				ft_putchar_fd('%', 1);
				(*len)++;
			}
			else
				ft_handle_specifier(*(format + 1), args, len);
			format += 2;
		}
	}
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			len;

	len = 0;
	va_start(args, format);
	ft_parse_format(format, &args, &len);
	va_end(args);
	return (len);
}
