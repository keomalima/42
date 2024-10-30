/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:44:31 by keomalima         #+#    #+#             */
/*   Updated: 2024/09/18 13:43:21 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*n;

	n = malloc(sizeof (t_list));
	if (!n)
		return (NULL);
	n->content = content;
	n->next = NULL;
	return (n);
}
