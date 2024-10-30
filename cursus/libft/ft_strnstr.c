/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:33:13 by keomalima         #+#    #+#             */
/*   Updated: 2024/09/19 10:52:18 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)hay);
	while (*(hay + i) && len > i)
	{
		j = 0;
		while (*(hay + i + j) && len > i + j && *(hay + i + j) == *(needle + j))
			j++;
		if (!*(needle + j))
			return ((char *)(hay + i));
		i++;
	}
	return (NULL);
}

/*
# Definition
This function searches for the first occurrence of the substring `needle` in
the string `haystack`, but only up to `len` characters.

# Explanation
- If `needle` is empty, return `haystack` immediately.
- Loop through `haystack` while ensuring the index stays within the `len` limit.
- For each position, compare the substring in `haystack` with `needle`.
- If a full match of `needle` is found, return a pointer to the start of
that match in `haystack`.
- If no match is found within `len`, return `NULL`.
*/
