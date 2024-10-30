/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricci-d <kricci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:09:50 by kricci-d          #+#    #+#             */
/*   Updated: 2024/08/26 12:39:50 by kricci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_getchar(int a)
{
	int	div;
	int	mod;

	div = a / 10;
	mod = a % 10;
	ft_putchar(div + '0', mod + '0');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_getchar(a);
			write(1, " ", 1);
			ft_getchar(b);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
