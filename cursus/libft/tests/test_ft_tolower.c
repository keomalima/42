/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:45:04 by keomalima         #+#    #+#             */
/*   Updated: 2024/09/15 17:45:36 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_tolower(void)
{
	int		i;
	int		r1;
	int		r2;
	int str[] = {'A', 'Z', 'a', 'z', '1', ' ', '\n', 'B', 'Y'};

	i = 0;
	while (i < 9)
	{
		r1 = isprint(str[i]);
		r2 = ft_isprint(str[i]);
		if (r1 == r2)
			printf("%s %s Result should be %d - Result is %d%s\n", "\033[32m", "\xF0\x9F\x99\x82", r1, r2, "\033[0m");
		else
			printf("%s %s Result should be %d - Result is %d%s\n", "\033[31m", "\xF0\x9F\x98\xA2", r1, r2, "\033[0m");
		i++;
	}
}
