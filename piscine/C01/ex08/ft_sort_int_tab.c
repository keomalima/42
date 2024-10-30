/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricci-d <kricci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:06:25 by kricci-d          #+#    #+#             */
/*   Updated: 2024/08/27 16:21:32 by kricci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	b;

	i = 0;
	while (i < size - 1)
	{
		b = i + 1;
		while (b < size)
		{
			if (tab[i] > tab[b])
			{
				temp = tab[i];
				tab[i] = tab[b];
				tab[b] = temp;
				b = i + 1;
			}
			b++;
		}
		i++;
	}
}
