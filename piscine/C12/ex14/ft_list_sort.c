/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricci-d <kricci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:50:39 by kricci-d          #+#    #+#             */
/*   Updated: 2024/09/10 17:06:52 by kricci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_list.h"

int	cmp(int	a, int b)
{
	if (a > b)
		return (0);
	return (1);
}

void	ft_list_sort(t_list **begin_list, int(*cmp)(int, int))
{
	t_list	*current;
	t_list	*next;
	t_list	*prev;

	prev = NULL;
	current = *begin_list;
	while (current && current->next)
	{
		next = current->next;
		if (!cmp(current->data, next->data))
		{
			if (!prev)
				*begin_list = next;
			else
				prev->next = next;
			current->next = next->next;
			next->next = current;
			current = *begin_list;
			prev = NULL;
		}
		else
		{
			prev = current;
			current = next;
		}			
	}
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
	ft_list_sort(&list, cmp);
	t_list *p = list;
	while (p)
	{
		printf("%i\n", p->data);
		p = p->next;
	}
	return(0);
}
