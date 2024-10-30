/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricci-d <kricci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:13:49 by kricci-d          #+#    #+#             */
/*   Updated: 2024/09/09 14:33:48 by kricci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_list.h"

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	i = 0;
	while (begin_list && i++ < nbr)
		begin_list = begin_list->next;
	return (begin_list);
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
	t_list *p = ft_list_at(list, 3);
	if (!p)
		return (0);
	printf("%i\n", p->data);
	return(0);
}
