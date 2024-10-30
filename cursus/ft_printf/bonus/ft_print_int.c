/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 09:53:36 by keomalima         #+#    #+#             */
/*   Updated: 2024/10/17 15:15:39 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_sign(t_printf *item, int nbr)
{
	int	len;

	len = 0;
	if (nbr < 0 && item->specifier != 'u')
		write(1, "-", 1);
	else if (item->plus_sign && item->specifier != 'u'
		&& item->specifier != 'x' && item->specifier != 'X')
		write(1, "+", 1);
	else if (item->space_pad)
	{
		write(1, " ", 1);
		len++;
	}
	return (len);
}

int	ft_print_int(t_printf *item, int nbr_len, int nbr)
{
	int	pad;
	int	print_len;

	pad = ft_cal_pad(item, nbr_len, nbr);
	if (item->zero_pad > 0 && !item->left_align)
	{
		print_len = ft_print_sign(item, nbr);
		ft_putchar_loop ('0', pad);
		ft_putnbr_printf_fd(nbr, 1);
	}
	else
	{
		if (!item->left_align)
			ft_putchar_loop (' ', pad);
		print_len = ft_print_sign(item, nbr);
		ft_putnbr_printf_fd(nbr, 1);
		if (item->left_align)
			ft_putchar_loop (' ', pad);
	}
	return (pad + print_len);
}

int	ft_print_int_prec(t_printf *item, int nbr_len, int nbr)
{
	int	zero_pad;
	int	space_pad;
	int	print_len;

	zero_pad = ft_cal_zero_pad_prec(item, nbr_len, nbr);
	space_pad = ft_cal_space_pad(item, nbr_len, nbr, zero_pad);
	if (!item->left_align)
		ft_putchar_loop (' ', space_pad);
	print_len = ft_print_sign(item, nbr);
	if (zero_pad > 0)
		ft_putchar_loop ('0', zero_pad);
	if (!(item->precision == 0 && nbr == 0))
		ft_putnbr_printf_fd(nbr, 1);
	if (item->left_align)
		ft_putchar_loop (' ', space_pad);
	return (zero_pad + space_pad + print_len);
}

int	ft_print_uns_int(t_printf *item, unsigned int nbr_len, unsigned int nbr)
{
	int	pad;

	pad = ft_cal_pad(item, nbr_len, nbr);
	if (item->zero_pad > 0 && !item->left_align)
	{
		ft_putchar_loop ('0', pad);
		ft_putnbr_uns_printf_fd(nbr, 1);
	}
	else
	{
		if (!item->left_align)
			ft_putchar_loop (' ', pad);
		ft_putnbr_uns_printf_fd(nbr, 1);
		if (item->left_align)
			ft_putchar_loop (' ', pad);
	}
	return (pad);
}

int	ft_print_uns_int_prec(t_printf *i, unsigned int n_len, unsigned int n)
{
	int	zero_pad;
	int	space_pad;

	zero_pad = ft_cal_zero_pad_prec(i, n_len, n);
	space_pad = ft_cal_space_pad(i, n_len, n, zero_pad);
	if (!i->left_align)
		ft_putchar_loop (' ', space_pad);
	if (zero_pad > 0)
		ft_putchar_loop ('0', zero_pad);
	if (!(i->precision == 0 && n == 0))
		ft_putnbr_uns_printf_fd(n, 1);
	if (i->left_align)
		ft_putchar_loop (' ', space_pad);
	return (zero_pad + space_pad);
}
