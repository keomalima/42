/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_check.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:02:06 by keomalima         #+#    #+#             */
/*   Updated: 2024/10/17 15:43:30 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_specifier_check(va_list *args, t_printf *item)
{
	int	len;

	len = 0;
	if (item->specifier == 'd' || item->specifier == 'i'
		|| item->specifier == 'u')
		len = ft_format_int(args, item);
	if (item->specifier == 'c' || item->specifier == 's')
		len = ft_format_char(args, item);
	if (item->specifier == 'x' || item->specifier == 'X')
		len = ft_format_hex(args, item);
	if (item->specifier == 'p')
		len = ft_format_ptr(args, item);
	if (item->specifier == '%')
		ft_putchar_fd('%', 1);
	return (len);
}
