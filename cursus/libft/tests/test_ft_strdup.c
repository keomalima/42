/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:16:36 by keomalima         #+#    #+#             */
/*   Updated: 2024/09/15 18:23:52 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_strdup(void)
{
	int		i;
	char *	r1;
	char *	r2;
	char *str[] = {"hello", "world", "", "short string", "A longer string to test", "1234567890", NULL};

	i = 0;
	while (str[i])
	{
		r1 = strdup(str[i]);
		r2 = ft_strdup(str[i]);
		if (strcmp(r1, r2))
			printf("%s %s Result should be %s - Result is %s%s\n", "\033[32m", "\xF0\x9F\x99\x82", r1, r1, "\033[0m");
		else
			printf("%s %s Result should be %s - Result is %s%s\n", "\033[31m", "\xF0\x9F\x98\xA2", r1, r1, "\033[0m");
		i++;
	}
}
