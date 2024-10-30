/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricci-d <kricci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:54:17 by kricci-d          #+#    #+#             */
/*   Updated: 2024/09/09 11:41:01 by kricci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_list.h"

void	ft_list_push_back(t_list **begin_list, int number)
{
	t_list *header = *begin_list;
	t_list *node;

	node = ft_create_elem(number);
	if (header)
	{
		while (header->next)
			header = header->next;
		header->next = node;
	}
	else
		*begin_list = node;
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
	ft_list_push_back(&list, 32);
	t_list *p = list;
	while (p)
	{
		printf("%i\n", p->data);
		p = p->next;
	}
	return(0);
}
