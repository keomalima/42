/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:18:48 by keomalima         #+#    #+#             */
/*   Updated: 2024/10/17 16:19:54 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr_hex_len(size_t ptr)
{
	int	i;

	i = 0;
	while (ptr > 0)
	{
		ptr /= 16;
		i++;
	}
	return (i + 2);
}

int	ft_format_ptr(va_list *args, t_printf *item)
{
	int		len;
	size_t	ptr;

	(void)item;
	ptr = va_arg(*args, size_t);
	len = ft_ptr_hex_len(ptr);
	len += ft_print_ptr(item, len, ptr);
	return (len);
}
