/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricci-d <kricci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 19:20:16 by kricci-d          #+#    #+#             */
/*   Updated: 2024/09/09 19:24:42 by kricci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void(*f)(void *), void *data_ref, int(*cmp)())
{
	while(begin_list)
	{
		if (cmp(begin_list->data, data_ref) == 0)
			f(begin_list->data);
		begin_list = begin_list->next;
	}
}
