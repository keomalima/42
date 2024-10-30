/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:03:59 by keomalima         #+#    #+#             */
/*   Updated: 2024/10/17 16:46:16 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hash(t_printf *item)
{
	if (item->specifier == 'x' || item->specifier == 'p')
		ft_putstr_fd("0x", 1);
	else
		ft_putstr_fd("0X", 1);
	return (2);
}

//I'm using one because hex values will never be negative
int	ft_print_hex(t_printf *item, int nbr_len, char *nbr, int n)
{
	int	pad;
	int	len;

	pad = ft_cal_pad(item, nbr_len, 1);
	len = 0;
	if (item->zero_pad > 0 && !item->left_align)
	{
		ft_putchar_loop ('0', pad);
		if (item->hash_pad && n != 0)
			len = ft_print_hash(item);
		ft_putnbr_printf_fd(ft_atoi(nbr), 1);
	}
	else
	{
		if (!item->left_align)
			ft_putchar_loop (' ', pad);
		if (item->hash_pad && n != 0)
			len = ft_print_hash(item);
		ft_putnbr_printf_fd(ft_atoi(nbr), 1);
		if (item->left_align)
			ft_putchar_loop (' ', pad);
	}
	return (pad + len);
}

int	ft_print_hex_prec(t_printf *item, int nbr_len, char *nbr, int n)
{
	int	zero_pad;
	int	space_pad;
	int	len;

	len = 0;
	zero_pad = ft_cal_zero_pad_prec(item, nbr_len, 1);
	space_pad = ft_cal_space_pad(item, nbr_len, 1, zero_pad);
	if (!item->left_align)
		ft_putchar_loop (' ', space_pad);
	len += ft_print_sign(item, 1);
	if (item->hash_pad && n != 0)
		len += ft_print_hash(item);
	if (zero_pad > 0)
		ft_putchar_loop ('0', zero_pad);
	if (!(item->precision == 0 && nbr == 0))
		ft_putnbr_printf_fd(ft_atoi(nbr), 1);
	if (item->left_align)
		ft_putchar_loop (' ', space_pad);
	return (space_pad + zero_pad + len);
}
