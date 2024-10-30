/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:38:58 by kricci-d          #+#    #+#             */
/*   Updated: 2024/08/29 20:15:33 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_len(char *src)
{
	int i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char *ft_strdup(char *src)
{
	char *dest;
	int src_len;
	int i;

	src_len = ft_len(src);
	dest = malloc(sizeof(char) * src_len + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < src_len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
