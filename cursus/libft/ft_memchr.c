/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:08:45 by keomalima         #+#    #+#             */
/*   Updated: 2024/09/19 13:09:36 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr = s;

	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}

/*
Compares n bytes to see if C is within string s

We can use p = unsigned char * because p is a void type

We cast C to unsigned char because memchr deals with bytes,
so it’s common to cast c to unsigned char for accurate byte-level comparisons.
*/
