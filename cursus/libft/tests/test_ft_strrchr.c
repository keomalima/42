/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:42:32 by keomalima         #+#    #+#             */
/*   Updated: 2024/09/16 10:44:17 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_strrchr(void)
{
	int		i;
	char	*r1;
	char	*r2;

	char *str[] = {
    "hello world",
    "find the last occurrence",
    "test strrchr function",
    "single character",
    "",
    NULL
};

char str2[] = {
    'o',
    'e',
    'r',
    'c',
    'x',
    '\0'
};

	i = 0;
	while (str[i])
	{
		r1 = strrchr(str[i], str2[i]);
		r2 = ft_strrchr(str[i], str2[i]);
		if (r1 == r2)
			printf("%s %s Result should be %s - Result is %s %s\n", "\033[32m", "\xF0\x9F\x99\x82", r1, r2, "\033[0m");
		else
			printf("%s %s Result should be %s - Result is %s %s\n", "\033[31m", "\xF0\x9F\x98\xA2", r1, r2, "\033[0m");
		i++;
	}
}
