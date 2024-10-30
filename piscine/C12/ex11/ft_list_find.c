/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricci-d <kricci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 19:25:37 by kricci-d          #+#    #+#             */
/*   Updated: 2024/09/09 19:29:16 by kricci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int(*cmp)())
{
	while (begin_list)
	{
		if (!cmp(begin_list->data, data_ref))
			return (begin_list);
		begin_list = begin_list->next;
	}
	return (begin_list);
}
