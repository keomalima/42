/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricci-d <kricci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:43:24 by kricci-d          #+#    #+#             */
/*   Updated: 2024/09/09 12:51:16 by kricci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_list.h"

t_list *ft_list_push_strs(int size, char **strs)
{
	t_list *list;
	t_list *node;
	int	i;

	list = NULL;
	i = 0;
	while (i < size)
	{
		node = ft_create_elem(strs[i++]);
		if (!node)
			return (NULL);
		node->next = list;
		list = node;
	}
	return (list);
}

int	main(void)
{
	char	*tab[] = {"Keo", "Is", "The", "Best"};

	t_list *p = ft_list_push_strs(4, tab);
	while(p)
	{
		printf("%s\n", p->data);
		p = p->next;
	}
	return(0);
}
