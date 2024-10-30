/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:59:18 by keomalima         #+#    #+#             */
/*   Updated: 2024/10/18 15:10:14 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_char(char spec, va_list *arg, int *len)
{
	char	c;
	char	*str;

	str = NULL;
	if (spec == 'c')
	{
		c = va_arg(*arg, int);
		ft_putchar_fd(c, 1);
		(*len)++;
	}
	else
	{
		str = va_arg(*arg, char *);
		if (!str)
			str = "(null)";
		(*len) += ft_strlen(str);
		ft_putstr_fd(str, 1);
	}
}
