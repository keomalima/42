/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 09:40:18 by keomalima         #+#    #+#             */
/*   Updated: 2024/10/17 15:02:45 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_int(va_list *args, t_printf *item)
{
	int	nbr;
	int	nbr_len;

	nbr = va_arg(*args, int);
	nbr_len = ft_nbr_len(nbr, item);
	if (item->specifier == 'u')
	{
		nbr_len = ft_nbr_uns_len((unsigned int)nbr, item);
		if (item->precision >= 0)
			nbr_len += ft_print_uns_int_prec(item, nbr_len, (unsigned int)nbr);
		else
			nbr_len += ft_print_uns_int(item, nbr_len, (unsigned int)nbr);
	}
	else if (item->precision >= 0)
		nbr_len += ft_print_int_prec(item, nbr_len, nbr);
	else
		nbr_len += ft_print_int(item, nbr_len, nbr);
	return (nbr_len);
}
