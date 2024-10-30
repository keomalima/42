/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:02:05 by keomalima         #+#    #+#             */
/*   Updated: 2024/09/13 13:07:27 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst || !src)
		return (NULL);
	if (dst > src)
	{
		i = len;
		while (i > 0)
		{
			i--;
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}

/*
Copying memory in situations where the source and destination may overlap,
such as shifting data in a buffer or moving a segment within the same array.

It copies for example a '\0' where a strncpy would stop copying.

Useful for copying binary data (e.g., structures, arrays of any type).

This works like memcpy but it make sure it doesnt overlapse.

if dst is bigger than src, than we have to copy backwards to avoid
overlapping.

In here if we start copying src to dest forward for 4bytes, memory
1006 will become 'A' instead of 'D'.
Address:       1000   1001   1002   1003   1004   1005   1006
src data:      A      B      C      D
dst data:                           ?      ?      ?      ?
*/
