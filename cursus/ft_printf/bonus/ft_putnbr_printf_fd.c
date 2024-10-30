/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_printf_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:54:42 by keomalima         #+#    #+#             */
/*   Updated: 2024/10/15 16:18:41 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_loop(char c, int nbr)
{
	while (nbr-- > 0)
		write(1, &c, 1);
}

void	ft_putnbr_uns_printf_fd(unsigned int n, int fd)
{
	if (n > 9)
		ft_putnbr_printf_fd(n / 10, fd);
	ft_putchar_fd((n % 10 + '0'), fd);
}

void	ft_putnbr_printf_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "2147483648", 10);
		return ;
	}
	if (n < 0)
		n = -n;
	if (n > 9)
		ft_putnbr_printf_fd(n / 10, fd);
	ft_putchar_fd((n % 10 + '0'), fd);
}
