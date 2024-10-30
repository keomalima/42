/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:25:53 by keomalima         #+#    #+#             */
/*   Updated: 2024/10/17 16:48:01 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_len(int nbr)
{
	int	i;

	i = 0;
	while (nbr > 0)
	{
		nbr /= 16;
		i++;
	}
	return (i);
}

char	*ft_transf_hex(int nbr, int hex_len, t_printf *item)
{
	char	*hex_up_case;
	char	*hex_low_case;
	char	*n;

	hex_low_case = "0123456789abcdef";
	hex_up_case = "0123456789ABCDEF";
	n = malloc (sizeof(char) * hex_len + 1);
	if (!n)
		return (NULL);
	n[hex_len] = '\0';
	while (nbr > 0)
	{
		if (item->specifier == 'x')
			n[--hex_len] = hex_low_case[nbr % 16];
		else
			n[--hex_len] = hex_up_case[nbr % 16];
		nbr /= 16;
	}
	return (n);
}

int	ft_format_hex(va_list *args, t_printf *item)
{
	int		nbr_len;
	int		nbr;
	char	*hex;

	if (item->specifier == 'u')
		return (0);
	nbr = va_arg(*args, int);
	nbr_len = ft_hex_len(nbr);
	if (nbr < 0)
	{
		nbr *= -1;
		hex = ft_transf_neg_hex(nbr, item);
	}
	else
		hex = ft_transf_hex(nbr, nbr_len, item);
	nbr_len = ft_strlen(hex);
	if (item->precision > 0)
		nbr_len += ft_print_hex_prec(item, nbr_len, hex, nbr);
	else
		nbr_len += ft_print_hex(item, nbr_len, hex, nbr);
	return (nbr_len);
}
