/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:00:49 by keomalima         #+#    #+#             */
/*   Updated: 2024/10/18 15:04:57 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(t_printf *item, int c)
{
	int	padding;

	padding = 0;
	if (item->width > 1)
		padding = item->width - 1;
	if (!item->left_align)
		ft_putchar_loop (' ', padding);
	ft_putchar_fd(c, 1);
	if (item->left_align)
		ft_putchar_loop (' ', padding);
	return (padding + 1);
}

int	ft_print_str(t_printf *item, char *c)
{
	int	str_len;
	int	padding;
	int	precision;

	str_len = ft_strlen(c);
	padding = 0;
	precision = 0;
	if (item->width > str_len || item->precision < str_len)
	{
		if (item->precision > 0 && item->precision < str_len)
			padding = item->width - item->precision;
		else if (item->width > 0)
			padding = item->width - str_len;
	}
	if (!item->left_align)
		ft_putchar_loop (' ', padding);
	if (item->precision > 0)
		while (item->precision > precision++ && *c)
			ft_putchar_fd(*c++, 1);
	else
		ft_putstr_fd(c, 1);
	if (item->left_align)
		ft_putchar_loop (' ', padding);
	return (padding + precision + str_len);
}
