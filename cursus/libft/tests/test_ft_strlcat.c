/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:59:56 by keomalima         #+#    #+#             */
/*   Updated: 2024/09/16 10:22:06 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_strlcat(void)
{
	int		i;
	size_t	r1;
	size_t	r2;
	char *str[] = {"dst", "dst", "dst", "dst", "dst", "dst", NULL};
	char *str2[] = {"src", "src", "src", "src", "src", "src", NULL};
	size_t sizes[] = {0, 1, 2, 3, 4, 5};


	i = 0;
	while (i < 4)
	{
		r1 = strlcat(str[i], str2[i], sizes[i]);
		r2 = ft_strlcat(str[i], str2[i], sizes[i]);
		if (r1 == r2)
			printf("%s %s Result should be %zu - Result is %zu%s\n", "\033[32m", "\xF0\x9F\x99\x82", r1, r2, "\033[0m");
		else
			printf("%s %s Result should be %zu - Result is %zu%s\n", "\033[31m", "\xF0\x9F\x98\xA2", r1, r2, "\033[0m");
		i++;
	}
}
