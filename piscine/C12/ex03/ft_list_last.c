/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricci-d <kricci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 16:03:38 by kricci-d          #+#    #+#             */
/*   Updated: 2024/09/09 10:49:48 by kricci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *last_ele = begin_list;

	while (last_ele && last_ele->next)
		last_ele = last_ele->next;
	return (last_ele);
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
	t_list *p = ft_list_last(list);
	printf("%i\n", p->data);
	return(0);
}
