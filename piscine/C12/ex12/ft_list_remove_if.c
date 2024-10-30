/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricci-d <kricci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 19:30:23 by kricci-d          #+#    #+#             */
/*   Updated: 2024/09/10 11:16:42 by kricci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void  *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*current;
	t_list	*prev;
	t_list	*next;

	current = *begin_list;
	prev = NULL;
	while (current)
	{
		next = current->next;
		if (!cmp(current->data, data_ref))
		{
			if (!prev)
				*begin_list = next;
			else
				prev->next = next;
			free_fct(current>data);
			free(current);
		}
		else
			prev = current;
		current = next;
	}
}
