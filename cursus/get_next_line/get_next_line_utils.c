/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:24:23 by keomalima         #+#    #+#             */
/*   Updated: 2024/10/29 11:34:28 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (i < n)
		((unsigned char *)s)[i++] = '\0';
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(size * count);
	if (!p)
		return (NULL);
	ft_bzero (p, count * size);
	return (p);
}

char	*ft_strjoin(char *stash, const char *buffer)
{
	char	*join;
	size_t	i;
	size_t	j;

	join = malloc(sizeof(char) * (strlen(stash) + strlen(buffer)) + 1);
	if (!join)
		return (NULL);
	i = -1;
	j = -1;
	while (stash[++i])
		join[i] = stash[i];
	while (buffer[++j])
		join[i + j] = buffer[j];
	join[i + j] = '\0';
	free(stash);
	return (join);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
