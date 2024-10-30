/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:42:53 by keomalima         #+#    #+#             */
/*   Updated: 2024/09/18 17:28:10 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	**ft_tab_malloc(char const *s, char c)
{
	int		str_counter;
	char	**tab;

	str_counter = 0;
	while (*s)
	{
		if (*s != c)
		{
			str_counter++;
			while ((*s != c) && *s)
				s++;
		}
		while (*s && (*s == c))
			s++;
	}
	tab = malloc(sizeof (char *) * (str_counter + 1));
	return (tab);
}

static char	*ft_str_malloc_cpy(char const *s, char c)
{
	int		i;
	int		str_len;
	char	*str;

	str_len = 0;
	i = 0;
	while (s[i] && (s[i] != c))
	{
		str_len++;
		i++;
	}
	str = malloc(sizeof (char) * str_len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (*s && (*s != c))
		str[i++] = *s++;
	str[i] = '\0';
	return (str);
}

static void	free_tab(char **tab)
{
	int	i;

	i = 0;
	if (tab)
	{
		while (tab[i])
			free(tab[i++]);
		free(tab);
	}
}

char	**ft_split(char const *s, char c)
{
	int		index;
	char	**tab;

	tab = ft_tab_malloc(s, c);
	if (!tab)
		return (NULL);
	index = -1;
	while (*s)
	{
		if (*s != c)
		{
			tab[++index] = ft_str_malloc_cpy(s, c);
			if (!tab[index])
			{
				free_tab(tab);
				return (NULL);
			}
			while (*s && (*s != c))
				s++;
		}
		while (*s && (*s == c))
			s++;
	}
	tab[index + 1] = NULL;
	return (tab);
}
