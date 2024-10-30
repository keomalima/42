/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricci-d <kricci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:07:50 by kricci-d          #+#    #+#             */
/*   Updated: 2024/09/04 22:32:22 by kricci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	c_check(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_malloc_size(char *str, char *charset)
{
	int	str_count;

	str_count = 0;
	while (*str)
	{
		while (c_check(*str, charset) && *str)
			str++;
		if (!c_check(*str, charset) && *str)
		{
			str_count++;
			while (!c_check(*str, charset) && *str)
				str++;
		}
	}
	return (str_count);
}

char	*ft_fill_tab(char *str, char *charset)
{
	char	*s;
	int		i;

	i = 0;
	while (!c_check(str[i], charset) && str[i])
		i++;
	s = malloc(sizeof (char) * (i + 1));
	if (!s)
		return (NULL);
	i = 0;
	while (!c_check(*str, charset) && *str)
		s[i++] = *str++;
	s[i] = '\0';
	return (s);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**tab;

	tab = malloc(sizeof (char *) * (ft_malloc_size(str, charset) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && c_check(*str, charset))
			str++;
		if (*str && !c_check(*str, charset))
		{
			tab[i] = ft_fill_tab(str, charset);
			i++;
			while (*str && !c_check(*str, charset))
				str++;
		}
	}	
	tab[i] = 0;
	return (tab);
}

int	main (void)
{
	char	*str = "Keoma2is42here";
	char	*charset = "42";

	ft_split(str, charset);
	return (0);
}
