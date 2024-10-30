/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:35:52 by keomalima         #+#    #+#             */
/*   Updated: 2024/09/15 17:37:09 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_isdigit(void)
{
	int		i;
	int		r1;
	int		r2;
	int str[] = {'0', '9', 'a', 'Z', ' ', '\n', '1', '5', '7', 'A', 0x30, 0x39, -1, 300, 255};

	i = 0;
	while (i < 15)
	{
		r1 = isdigit(str[i]);
		r2 = ft_isdigit(str[i]);
		if (r1 == r2)
			printf("%s %s Result should be %d - Result is %d%s\n", "\033[32m", "\xF0\x9F\x99\x82", r1, r2, "\033[0m");
		else
			printf("%s %s Result should be %d - Result is %d%s\n", "\033[31m", "\xF0\x9F\x98\xA2", r1, r2, "\033[0m");
		i++;
	}
}
