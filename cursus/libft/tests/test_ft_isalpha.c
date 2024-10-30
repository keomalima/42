/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:25:14 by keomalima         #+#    #+#             */
/*   Updated: 2024/09/15 17:34:05 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	test_ft_isalpha(void)
{
	int		i;
	int		r1;
	int		r2;
	int str[] = {'a', 'Z', '1', '@', ' ', '\n', 0x61, 0x5A, 0x31, 0x40, 0x20, 0x0A, 0x41, 0x7A, -1, 300, 255, -1};

	i = 0;
	while (i < 18)
	{
		r1 = isalpha(str[i]);
		r2 = ft_isalpha(str[i]);
		if (r1 == r2)
			printf("%s %s Result should be %d - Result is %d%s\n", "\033[32m", "\xF0\x9F\x99\x82", r1, r2, "\033[0m");
		else
			printf("%s %s Result should be %d - Result is %d%s\n", "\033[31m", "\xF0\x9F\x98\xA2", r1, r2, "\033[0m");
		i++;
	}
}
