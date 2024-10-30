/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 15:01:50 by keomalima         #+#    #+#             */
/*   Updated: 2024/09/15 17:09:38 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_atoi(void)
{
	int		i;
	int		r1;
	int		r2;
	const char	*str[] = {"    ", "abc", "0000123", "123abc","   +42   ", "+-123", "-", "2147483647", "-2147483648", "+2147483648", "-2147483649", "+-2147483648", NULL};

	i = 0;
	while (str[i])
	{
		r1 = atoi(str[i]);
		r2 = ft_atoi(str[i]);
		if (r1 == r2)
			printf("%s %s Result should be %d - Result is %d%s\n", "\033[32m", "\xF0\x9F\x99\x82", r1, r2, "\033[0m");
		else
			printf("%s %s Result should be %d - Result is %d%s\n", "\033[31m", "\xF0\x9F\x98\xA2", r1, r2, "\033[0m");
		i++;
	}
}
