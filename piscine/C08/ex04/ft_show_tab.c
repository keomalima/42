/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricci-d <kricci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 15:20:54 by kricci-d          #+#    #+#             */
/*   Updated: 2024/08/30 16:02:49 by kricci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

void	ft_putchar(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

void	ft_putint(int nbr)
{
	char	str;

	if (nbr > 9)
		ft_putint(nbr / 10);
	str = (nbr % 10) + '0';
	write(1, &str, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putchar(par[i].str);
		ft_putint(par[i].size);
		write(1, "\n", 1);
		par[i].copy[0] = 'X';
		ft_putchar(par[i].copy);
		i++;
	}
}

int	main(void)
{
	char	*tab[4] = {"Brazil", "France", "Spain", "Switzerland"};
	t_stock_str *s_tab;

	s_tab = ft_strs_to_tab(4, tab);
	ft_show_tab(s_tab);
}
