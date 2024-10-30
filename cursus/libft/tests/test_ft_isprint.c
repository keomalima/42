/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:38:18 by keomalima         #+#    #+#             */
/*   Updated: 2024/09/15 17:39:10 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_isprint(void)
{
	int		i;
	int		r1;
	int		r2;
	int str[] = {' ', '!', '~', 'a', 'Z', '1', '\n', '\t', 0x20, 0x7E, 0x7F, -1, 300, 255};

	i = 0;
	while (i < 14)
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
