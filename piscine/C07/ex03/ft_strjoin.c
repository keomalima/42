/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricci-d <kricci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:02:24 by kricci-d          #+#    #+#             */
/*   Updated: 2024/08/28 17:53:59 by kricci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len_str(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	h;
	int	l;

	i = 0;
	h = 0;
	l = 0;
	while (sep[h])
		h++;
	while (i < size)
	{
		j = 0;
		while (strs[i][j++])
			l++;
		if (i + 1 < size)
			l += h;
		i++;
	}
	return (l);
}

void	ft_putchar(int size, char *str, char **strs, char *sep)
{
	int	i;
	int	j;
	int	l;
	int	m;

	i = 0;
	l = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			str[l++] = strs[i][j++];
		m = 0;
		if (i + 1 < size)
			while (sep[m])
				str[l++] = sep[m++];
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	len;
	char	*str;

	if (size == 0)
	{
		str = malloc (sizeof (char) * 1);
		str[0] = '\0';
		return (str);
	}
	len = ft_len_str(size, strs, sep);
	str = malloc (sizeof (char) * (len + 1));
	if (!str)
		return (NULL);
	ft_putchar(size, str, strs, sep);
	str[len] = '\0';
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*strs[3] = {"Hello", "world", "!"};
	char	*sep = ",";
	printf("%s", ft_strjoin(3, strs, sep));
}
*/
