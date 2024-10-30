/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:47:13 by keomalima         #+#    #+#             */
/*   Updated: 2024/09/15 17:55:04 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_strchr(void)
{
	int		i;
	char*	r1;
	char*	r2;
	char *str[] = {"hello", "world", "abc", "123", " ", "", "a", "test string", "string with multiple chars", NULL};
	char w[] = {'h', 'o', 'z', '1', ' ', '\0', 'a', 's', 'm', 'x'};

	i = 0;
	while (str[i])
	{
		r1 = strchr(str[i], w[i]);
		r2 = ft_strchr(str[i], w[i]);
		if (r1 == r2)
			printf("%s %s Result should be %s - Result is %s%s\n", "\033[32m", "\xF0\x9F\x99\x82", r1, r2, "\033[0m");
		else
			printf("%s %s Result should be %s - Result is %s%s\n", "\033[31m", "\xF0\x9F\x98\xA2", r1, r2, "\033[0m");
		i++;
	}

}
