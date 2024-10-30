/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:37:04 by keomalima         #+#    #+#             */
/*   Updated: 2024/09/16 10:41:26 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_strnstr(void)
{
	int		i;
	char	*r1;
	char	*r2;

	char *str[] = {
    "hello world",
    "find the needle in the haystack",
    "test strnstr function",
    "empty",
    "",
    NULL
};

char *str2[] = {
    "world",
    "needle",
    "strnstr",
    "nonexistent",
    "empty",
    NULL
};

size_t size[] = {
    11, 30, 20, 10, 5
};

	i = 0;
	while (str[i])
	{
		r1 = strnstr(str[i], str2[i], size[i]);
		r2 = ft_strnstr(str[i], str2[i], size[i]);
		if (r1 == r2)
			printf("%s %s Result should be %s - Result is %s %s\n", "\033[32m", "\xF0\x9F\x99\x82", r1, r2, "\033[0m");
		else
			printf("%s %s Result should be %s - Result is %s %s\n", "\033[31m", "\xF0\x9F\x98\xA2", r1, r2, "\033[0m");
		i++;
	}
}
