/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct_parse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:58:06 by keomalima         #+#    #+#             */
/*   Updated: 2024/10/16 17:36:21 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_struct_digit(char **format)
{
	int	i;

	i = 0;
	while (ft_isdigit(**format))
	{
		i = i * 10 + (**format - '0');
		(*format)++;
	}
	return (i);
}

void	ft_struct_parse(char *format, t_printf *flags)
{
	while (*(format) == '-' || *(format) == '0' || *(format) == '+'
		|| *(format) == ' ' || *(format) == '#')
	{
		if (*(format) == '-')
			flags->left_align = 1;
		if (*(format) == '+')
			flags->plus_sign = 1;
		if (*(format) == '0')
			flags->zero_pad = 1;
		if (*(format) == ' ')
			flags->space_pad = 1;
		if (*(format) == '#')
			flags->hash_pad = 1;
		format++;
	}
	flags->width = ft_struct_digit(&format);
	flags->precision = -1;
	if (*format == '.')
	{
		format++;
		flags->precision = ft_struct_digit(&format);
	}
	flags->specifier = *format;
}
