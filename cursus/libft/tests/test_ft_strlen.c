/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:20:24 by keomalima         #+#    #+#             */
/*   Updated: 2024/09/15 17:21:18 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_ft_strlen(void)
{
	int	i;
	int	r1;
	int	r2;
	char *tab[] = {"", "a", "abc", "1234567890", "hello, world!", "line1\nline2", "   leading and trailing spaces   ", "longer string with multiple characters to test the maximum length the function can handle", "\x01\x02\x03", "unicode: \u2603", NULL};

	i = 0;
	while (tab[i])
	{
		r1 = strlen(tab[i]);
		r2 = ft_strlen(tab[i]);

		if (r1 == r2)
			printf("%s %s Result should be %d - Result is %d%s\n", "\033[32m", "\xF0\x9F\x99\x82", r1, r2, "\033[0m");
		else
			printf("%s %s Result should be %d - Result is %d%s\n", "\033[31m", "\xF0\x9F\x98\xA2", r1, r2, "\033[0m");
		i++;
	}

}
