/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricci-d <kricci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:47:06 by kricci-d          #+#    #+#             */
/*   Updated: 2024/09/09 10:11:32 by kricci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_list.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_list_size(t_list *begin_list)
{
	int	i;

	i = 0;
	while (begin_list)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i);
}

int	main(int ac, char **av)
{
	int	i;
	int	number;
	t_list *list = NULL;

	i = 1;
	while (i < ac)
	{
		number = atoi(av[i++]);
		t_list *n = ft_create_elem(number);
		n->next = list;
		list = n;
	}
	printf("%i\n", ft_list_size(list));
	return(0);
}
