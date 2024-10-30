/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:46:48 by keomalima         #+#    #+#             */
/*   Updated: 2024/09/16 10:49:15 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_isalnum(void)
{
	int		i;
	int		r1;
	int		r2;
	int str[] = {
    'a',
    'Z',
    '0',
    '9',
    '@',
    ' ',
    '\n',
    '1',
    '!',
    127,
    -1,
    300
};

	i = 0;
	while (i < 18)
	{
		r1 = isalnum(str[i]);
		r2 = ft_isalnum(str[i]);
		if (r1 == r2)
			printf("%s %s Result should be %d - Result is %d%s\n", "\033[32m", "\xF0\x9F\x99\x82", r1, r2, "\033[0m");
		else
			printf("%s %s Result should be %d - Result is %d%s\n", "\033[31m", "\xF0\x9F\x98\xA2", r1, r2, "\033[0m");
		i++;
	}
}
