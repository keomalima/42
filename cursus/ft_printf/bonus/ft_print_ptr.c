/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:45:06 by keomalima         #+#    #+#             */
/*   Updated: 2024/10/17 15:46:16 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hex_ptr(size_t ptr, int len)
{
	char	*hex_carac;

	hex_carac = "0123456789abcdef";
	if (ptr >= 16)
		ft_hex_ptr(ptr / 16, len);
	ft_putchar_fd(hex_carac[ptr % 16], 1);
}

//I'm using one because hex values will never be negative
int	ft_print_ptr(t_printf *item, int nbr_len, size_t nbr)
{
	int	pad;

	pad = ft_cal_pad(item, nbr_len, nbr);
	if (!item->left_align)
		ft_putchar_loop (' ', pad);
	ft_print_hash(item);
	ft_hex_ptr(nbr, nbr_len);
	if (item->left_align)
		ft_putchar_loop (' ', pad);
	return (pad);
}
