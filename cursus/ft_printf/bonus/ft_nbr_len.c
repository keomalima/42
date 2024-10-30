/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:55:15 by keomalima         #+#    #+#             */
/*   Updated: 2024/10/15 16:16:52 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbr_len(int n, t_printf *item)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		i++;
		n = -n;
	}
	else if (item->plus_sign)
		i++;
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	i += 1;
	return (i);
}

int	ft_nbr_uns_len(unsigned int n, t_printf *item)
{
	int	i;

	i = 0;
	if (n == 0 && !(item->precision == 0))
		return (1);
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	i += 1;
	return (i);
}
