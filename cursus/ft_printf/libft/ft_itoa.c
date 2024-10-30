/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:14:44 by keomalima         #+#    #+#             */
/*   Updated: 2024/09/17 16:02:48 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_int_size(int n)
{
	int		int_size;
	long	nbr;

	nbr = n;
	int_size = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		int_size++;
	}
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		nbr /= 10;
		int_size++;
	}
	return (int_size);
}

static char	*ft_str_populate(char *str, int n, int size)
{
	long	nbr;
	int		i;

	nbr = n;
	i = 0;
	if (nbr < 0)
	{
		str[i] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		str[i] = '0';
	while (nbr > 0)
	{
		str[size - i - 1] = (nbr % 10) + '0';
		nbr /= 10;
		i++;
	}
	str[size] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		int_size;
	char	*str;

	int_size = ft_int_size(n);
	str = malloc(sizeof (char) * int_size + 1);
	if (!str)
		return (NULL);
	ft_str_populate(str, n, int_size);
	return (str);
}
