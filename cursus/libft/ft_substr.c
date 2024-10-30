/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:55:32 by keomalima         #+#    #+#             */
/*   Updated: 2024/09/20 11:38:31 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}

/*
# Definition
This function returns a new string starting from the given index `start`
and of length `len` from the original string `s`.

# Explanation
- Check if `start` is greater than or equal to the length of `s`.
- Determine the actual length of the substring:
	- If `len` exceeds the remaining length of `s` after `start`,
	adjust `len` to fit.
	- Otherwise, use `len` as is.
- Allocate memory for the new string.
- Copy the characters from `s` to the new string, stopping after
`len`characters or when the end of `s` is reached.
*/
