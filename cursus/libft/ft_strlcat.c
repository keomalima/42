/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:43:14 by keomalima         #+#    #+#             */
/*   Updated: 2024/09/19 11:41:02 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize && dst_len < dstsize)
	{
		i = 0;
		while ((i < (dstsize - dst_len - 1)) && src[i])
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
	}
	if (dst_len >= dstsize)
		dst_len = dstsize;
	return (dst_len + src_len);
}

/*
# Definition
This function appends up to `dstsize - dst_len - 1` characters from `src`
to the end of `dst`, ensuring the result is null-terminated.
It returns the total length of `src` plus the original length of `dst`.

# Explanation
- Calculate the length of `dst` and `src`.
- If `dstsize` is greater than 0 and `dst` is shorter than `dstsize`:
    - Append characters from `src` to `dst`,
	up to `dstsize - dst_len - 1` characters.
- If `dst` is already at or beyond `dstsize`, adjust `dst_len` to `dstsize`.
- Return the sum of the original `dst` length and the length of `src`.
*/
