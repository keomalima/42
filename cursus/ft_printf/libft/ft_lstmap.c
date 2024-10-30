/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:02:55 by keomalima         #+#    #+#             */
/*   Updated: 2024/09/19 13:21:25 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*n;

	list = NULL;
	if (!f || !del)
		return (NULL);
	while (lst)
	{
		n = ft_lstnew(f(lst->content));
		if (!n)
		{
			ft_lstclear(&n, del);
			return (NULL);
		}
		ft_lstadd_back(&list, n);
		lst = lst->next;
	}
	return (list);
}

/*
# Definition
This function creates a new linked list by applying the function `f`
to each element of the original list `lst`.
It returns the newly created list.

# Explanation
- Traverse the original list `lst`:
    - Apply function `f` to the content of each node.
    - Create a new node with the transformed content.
    - Add the new node to the end of the new list `list`.
    - If node creation fails, clear the newly created list and return `NULL`.
*/
