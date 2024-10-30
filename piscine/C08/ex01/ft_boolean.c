/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricci-d <kricci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:59:14 by kricci-d          #+#    #+#             */
/*   Updated: 2024/08/29 18:06:33 by kricci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_boolean.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

t_bool	ft_is_even(int nbr)
{
	return ((EVEN(nbr)) ? TRUE : FALSE);
}

int	main(void)
{
	if (ft_is_even(5) == TRUE)
		ft_putstr(EVEN_MSG);
	else 
		ft_putstr(ODD_MSG);
	return (SUCCESS);
}
