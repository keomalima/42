/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_transf_neg_hex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:54:54 by keomalima         #+#    #+#             */
/*   Updated: 2024/10/16 18:09:57 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_invert_tab(int *tab, int index, int nbr)
{
	int	index_cpy;

	index_cpy = index;
	while (nbr > 0)
	{
		tab[index_cpy--] = nbr % 2;
		nbr /= 2;
	}
	while (index >= 0)
	{
		if (tab[index] == 0)
			tab[index] = 1;
		else
			tab[index] = 0;
		index--;
	}
}

void	ft_tab_add(int *tab, int index)
{
	while (index >= 0)
	{
		if (tab[index] == 0)
		{
			tab[index] = 1;
			break ;
		}
		tab[index] = 0;
		index--;
	}
}

int	ft_power_of(int base, int power)
{
	int	result;

	result = 1;
	while (power-- > 0)
		result *= base;
	return (result);
}

char	*ft_convert_to_hex(int *tab, int index, char *hex_case)
{
	int		i;
	int		j;
	int		str_i;
	int		nbr;
	char	*hex_string;

	hex_string = malloc(9 * sizeof(char));
	if (!hex_string)
		return (NULL);
	j = 0;
	str_i = 0;
	while (index >= j)
	{
		i = 4;
		nbr = 0;
		while (i-- > 0)
			nbr += tab[j++] * ft_power_of(2, i);
		hex_string[str_i++] = hex_case[nbr];
	}
	hex_string[i] = '\0';
	return (hex_string);
}

char	*ft_transf_neg_hex(int nbr, t_printf *item)
{
	char	*n;
	int		index;
	int		i;
	int		binary_array[32];
	char	*hex_case;

	if (item->specifier == 'x')
		hex_case = "0123456789abcdef";
	else
		hex_case = "0123456789ABCDEF";
	index = 31;
	i = 0;
	while (index >= i)
		binary_array[i++] = 0;
	ft_invert_tab(binary_array, index, nbr);
	ft_tab_add(binary_array, index);
	n = ft_convert_to_hex(binary_array, index, hex_case);
	return (n);
}
