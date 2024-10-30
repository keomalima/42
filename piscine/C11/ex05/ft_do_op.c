/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricci-d <kricci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 09:44:07 by kricci-d          #+#    #+#             */
/*   Updated: 2024/09/06 14:46:50 by kricci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include <unistd.h>

void	ft_calculator(int v1, int v2, char *sign, int(*f[])(int, int))
{
	if (ft_strcmp(sign, '+'))
		ft_putnbr(f[0](v1, v2));
	else if (ft_strcmp(sign, '-'))
		ft_putnbr(f[1](v1, v2));
	else if (ft_strcmp(sign, '/'))
		ft_putnbr(f[2](v1, v2));
	else if (ft_strcmp(sign, '*'))
		ft_putnbr(f[3](v1, v2));
	else if (ft_strcmp(sign, '%'))
		ft_putnbr(f[4](v1, v2));
	else
		write(1, "0", 1);
}

void	ft_do_op(char **av)
{
	int	(*operations[])(int, int) = {ft_add, ft_subtract, ft_divide, ft_multiply,ft_modulo};
	int	valeur1;
	int	valeur2;

	valeur1 = ft_atoi(av[1]);
	valeur2 = ft_atoi(av[3]);
	if (ft_strcmp(av[2], '/') && valeur2 == 0)
	{
		write(1, "Stop : division by zero", 23);
		return ;
	}
	if (ft_strcmp(av[2], '%') && valeur2 == 0)
	{
		write(1, "Stop : modulo by zero", 21);
		return ;
	}
	else
		ft_calculator(valeur1, valeur2, av[2], operations);
}
