/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:05:10 by keomalima         #+#    #+#             */
/*   Updated: 2024/09/19 11:17:01 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	str = malloc (sizeof (char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
# Definition
This function creates a new string by applying the function `f` to each
character of the input string `s`.

# Explanation
- First, determine the length of the input string `s`.
- Allocate memory for the new string, including space for the null terminator.
- Apply the function `f` to the current character and its index, storing
the result in the new string.
*/
