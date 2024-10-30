/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricci-d <kricci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 20:17:55 by kricci-d          #+#    #+#             */
/*   Updated: 2024/09/10 20:22:17 by kricci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(int nb)
{
	t_btree	*node;

	node = malloc(sizeof (t_btree));
	if (!node)
		return (NULL);
	node->item = nb;
	node->right = NULL;
	node->left = NULL;
	return (node);
}
