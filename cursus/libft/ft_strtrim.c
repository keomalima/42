/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:51:36 by keomalima         #+#    #+#             */
/*   Updated: 2024/09/20 12:02:50 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(const char *set, char c)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	end;
	size_t	start;
	char	*str;

	start = 0;
	while (s1[start] && ft_check(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (s1[end - 1] && ft_check(set, s1[end - 1]))
		end--;
	str = malloc(sizeof(char) * (end - start) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (end > start)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}

/*
# Definition
This function trims characters from the set at both the beginning
and end of the string and returns the new trimmed string.

# Explanation
- First, iterate from the beginning of the string until a character
is found that is not in the set.
- Then, iterate from the end of the string until a character is found
that is not in the set.
- Allocate memory for the new string based on the difference between
the end and start indices.
- Finally, copy the characters between the start and end indices into
the new string.
*/
