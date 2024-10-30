/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:16:25 by keomalima         #+#    #+#             */
/*   Updated: 2024/09/16 10:35:17 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_strlcpy(void)
{
	int		i;
	size_t	r1;
	size_t	r2;

	char *str[] = {"hello", "world", "", "longer string", "123", NULL};
	char str2[5][20] = {"", "", "", "", ""};
	size_t sizes[] = {10, 6, 20, 5, 3};

	i = 0;
	while (str[i])
	{
		r1 = strlcpy(str2[i], str[i], sizes[i]);
		r2 = ft_strlcpy(str2[i], str[i], sizes[i]);
		if (r1 == r2)
			printf("%s %s Result should be %zu %s - Result is %zu %s %s\n", "\033[32m", "\xF0\x9F\x99\x82", r1, str2[i], r2, str2[i], "\033[0m");
		else
			printf("%s %s Result should be %zu %s - Result is %zu %s %s\n", "\033[31m", "\xF0\x9F\x98\xA2", r1, str2[i], r2, str2[i], "\033[0m");
		i++;
	}
}
