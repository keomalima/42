/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricci-d <kricci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:13:17 by kricci-d          #+#    #+#             */
/*   Updated: 2024/09/05 19:44:33 by kricci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i++ < length)
	{
		if (f(tab[i]) != 0)
			count++;
	}
	return (count);
}
