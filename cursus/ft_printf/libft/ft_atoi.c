/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:30:19 by keomalima         #+#    #+#             */
/*   Updated: 2024/09/13 17:56:26 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	nb;

	nb = 0;
	sign = 1;
	while ((*(str) >= '\t' && *(str) <= '\r') || *(str) == ' ')
		str++;
	if (*(str) == '-' || *(str) == '+')
	{
		if (*(str) == '-')
			sign *= -1;
		str++;
	}
	while (*(str) >= '0' && *(str) <= '9')
	{
		nb = (nb * 10) + *(str) - '0';
		str++;
	}
	return (nb * sign);
}
