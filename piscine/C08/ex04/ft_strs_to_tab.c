/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricci-d <kricci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 13:56:35 by kricci-d          #+#    #+#             */
/*   Updated: 2024/08/30 15:29:35 by kricci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

int	ft_len(char *av)
{
	int	i;

	i = 0;
	while (av[i])
		i++;
	return (i);
}

char	*ft_strcpy(int len, char *src)
{
	char	*str;
	int	i;

	i = 0;
	str = malloc (sizeof (char) * (len + 1));
	if (!str)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*str_struct;
	int			i;

	str_struct = malloc (sizeof (t_stock_str) * (ac + 1));
	if (!str_struct)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		str_struct[i].size = ft_len(av[i]);
		str_struct[i].str = av[i];
		str_struct[i].copy = ft_strcpy(str_struct[i].size, av[i]);
		i++;
	}
	str_struct[i].str = 0;
	return (str_struct);
}
