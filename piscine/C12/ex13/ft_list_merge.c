/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricci-d <kricci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:27:24 by kricci-d          #+#    #+#             */
/*   Updated: 2024/09/10 12:47:31 by kricci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*node;
	
	node = *begin_list1;
	if (!node && begin_list2)
		*begin_list1 = begin_list2;
	else if (begin_list2)
	{
		while (node->next)
			node = node->next;
		node->next = begin_list2;
	}
}


int	main(int ac, char **av)
{
	int	i;
	int	number;
	t_list 	*list = NULL;
	t_list	*list2 = NULL;

	i = 1;
	while (i < ac)
	{
		number = atoi(av[i++]);
		t_list *n = ft_create_elem(number);
		t_list *n2 = ft_create_elem(number * 2);
		n2->next = list2;
		list2 = n2;
		n->next = list;
		list = n;
	}
	ft_list_merge(&list, list2);
	t_list *p = list;
	while (p)
	{
		printf("%i\n", p->data);
		p = p->next;
	}
	return(0);
}
