/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:11:13 by keomalima         #+#    #+#             */
/*   Updated: 2024/10/18 17:24:06 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_len(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		nbr /= 16;
		len++;
	}
	return (len);
}

char	*ft_dec_to_hex(char spec, unsigned int nbr, int hex_len)
{
	char	*hex_case;
	char	*str;

	str = malloc (sizeof(char) * (hex_len + 1));
	if (!str)
		return (NULL);
	str[hex_len] = '\0';
	if (spec == 'x')
		hex_case = "0123456789abcdef";
	else
		hex_case = "0123456789ABCDEF";
	if (nbr == 0)
	{
		str[0] = '0';
		return (str);
	}
	while (nbr > 0)
	{
		str[--hex_len] = hex_case[nbr % 16];
		nbr /= 16;
	}
	return (str);
}

void	ft_print_hex(char spec, va_list *arg, int *len)
{
	int		hex_len;
	int		nbr;
	char	*hex;

	nbr = va_arg(*arg, int);
	hex_len = ft_hex_len(nbr);
	hex = ft_dec_to_hex(spec, nbr, hex_len);
	if (hex)
	{
		(*len) += ft_strlen(hex);
		ft_putstr_fd(hex, 1);
		free(hex);
	}
}
