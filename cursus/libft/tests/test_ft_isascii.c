/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:00:26 by keomalima         #+#    #+#             */
/*   Updated: 2024/09/15 17:14:24 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_isascii(void)
{
	int	i;
	int	r1;
	int	r2;
	int	tab[] = {0, 65, 97, 48, 32, 9, 10, 127, 128, 255, -1, 300};

	i = 0;
	while (i < 13)
	{
		r1 = isascii(tab[i]);
		r2 = ft_isascii(tab[i]);

		if (r1 == r2)
			printf("%s %s Result should be %d - Result is %d%s\n", "\033[32m", "\xF0\x9F\x99\x82", r1, r2, "\033[0m");
		else
			printf("%s %s Result should be %d - Result is %d%s\n", "\033[31m", "\xF0\x9F\x98\xA2", r1, r2, "\033[0m");
		i++;
	}

}

