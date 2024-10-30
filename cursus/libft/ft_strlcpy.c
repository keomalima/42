/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:19:06 by keomalima         #+#    #+#             */
/*   Updated: 2024/09/20 10:27:05 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize)
	{
		i = 0;
		while (i < dstsize - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*
# Definition
This function copies up to `dstsize - 1` characters from the string
`src` to `dst`,
It returns the total length of `src`.

# Explanation
- If `dstsize` is 0, return 0 (no characters can be copied).
- Loop through `src`, copying characters to `dst` until either `dstsize - 1`
is reached or `src` ends.
- Return the total length of `src` (even if not all characters fit in `dst`).
*/
