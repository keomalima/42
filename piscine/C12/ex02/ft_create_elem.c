/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricci-d <kricci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:12:09 by kricci-d          #+#    #+#             */
/*   Updated: 2024/09/08 16:41:42 by kricci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../ft_list.h"

t_list	*ft_create_elem(int data)
{
	t_list *n;

	n = malloc(sizeof(t_list));
	if (!n)
		return (NULL);
	n->data = data;
	n->next = NULL;
	return (n);
}
