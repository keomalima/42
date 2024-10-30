/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:28:06 by keomalima         #+#    #+#             */
/*   Updated: 2024/09/19 11:05:20 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && n > i)
	{
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}

/*
# Definition
This function compares up to `n` characters of two strings, `s1` and `s2`,
and returns the difference between the first differing characters.

# Explanation
- Loop through both strings as long as the characters at the current position
are the same and the loop index is less than `n`.
- If a mismatch is found, return the difference between the two differing
characters (cast to `unsigned char`).
- If the loop reaches the end of one string before `n` is reached, return the
difference at that position.
- If no differences are found within `n` characters, return `0`.
*/
