/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:21:31 by keomalima         #+#    #+#             */
/*   Updated: 2024/09/15 18:27:35 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_strncmp(void)
{
	int		i;
	int	r1;
	int	r2;
	char *str[] = {"hello", "world", "abcdef", "123", "", "same", "testing", NULL};
	char *str2[] = {"hello", "word", "abcxyz", "124", "abc", "same", "test", NULL};
	size_t size[] = {0, 3, 5, 10, 1, 3, 6};


	i = 0;
	while (str[i])
	{
		r1 = strncmp(str[i], str2[i], size[i]);
		r2 = ft_strncmp(str[i], str2[i], size[i]);
		if (r1 == r2)
			printf("%s %s Result should be %d - Result is %d%s\n", "\033[32m", "\xF0\x9F\x99\x82", r1, r1, "\033[0m");
		else
			printf("%s %s Result should be %d - Result is %d%s\n", "\033[31m", "\xF0\x9F\x98\xA2", r1, r1, "\033[0m");
		i++;
	}
}
