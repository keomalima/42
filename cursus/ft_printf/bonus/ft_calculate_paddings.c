/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculate_paddings.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:36:06 by keomalima         #+#    #+#             */
/*   Updated: 2024/10/17 14:48:42 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_cal_pad(t_printf *item, int nbr_len, int nbr)
{
	int	padding;

	padding = 0;
	if (item->space_pad && nbr > 0 && !item->plus_sign
		&& item->specifier != 'u')
		nbr_len++;
	if (item->hash_pad && (item->specifier == 'x'
			|| item->specifier == 'X'))
		nbr_len += 2;
	if (item->width > nbr_len)
		padding = item->width - nbr_len;
	return (padding);
}

int	ft_cal_zero_pad_prec(t_printf *item, int nbr_len, int nbr)
{
	int	zero_padding;

	if ((nbr < 0 || item->plus_sign) && item->specifier != 'u')
		nbr_len--;
	zero_padding = 0;
	if (item->precision > nbr_len)
		zero_padding = item->precision - nbr_len;
	return (zero_padding);
}

int	ft_cal_space_pad(t_printf *item, int nbr_len, int nbr, int zero_pad)
{
	int	has_sign;
	int	printed_length;
	int	space_padding;

	has_sign = 0;
	if (nbr < 0 || item->plus_sign)
	{
		nbr_len--;
		has_sign++;
	}
	if (item->hash_pad && (item->specifier == 'x' || item->specifier == 'X'))
		nbr_len += 2;
	if (item->space_pad && nbr >= 0 && !item->plus_sign)
		has_sign++;
	printed_length = nbr_len + zero_pad + has_sign;
	space_padding = 0;
	if (item->width > printed_length)
		space_padding = item->width - printed_length;
	if ((item->precision == 0 && nbr == 0) && item->width > 0)
		space_padding++;
	return (space_padding);
}
