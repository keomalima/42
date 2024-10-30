/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:51:22 by keomalima         #+#    #+#             */
/*   Updated: 2024/10/17 15:33:48 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_char(va_list *args, t_printf *item)
{
	char	c;
	char	*str;
	int		len;

	str = NULL;
	if (item->specifier == 'c')
	{
		c = va_arg(*args, int);
		len = ft_print_char(item, c);
	}
	else
	{
		str = va_arg(*args, char *);
		if (!str)
			str = "(null)";
		len = ft_print_str(item, str);
	}
	return (len);
}
