/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:17:50 by keomalima         #+#    #+#             */
/*   Updated: 2024/09/20 11:16:35 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_del(void *content)
{
	free(content);
}

void	*ft_to_up(void *content)
{
	int	i;
	char	*s;

	i = 0;
	s = (char *)content;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}

int	main()
{
	t_list	*elem1;
	t_list	*elem2;
	t_list	*elem3;
	t_list	*elem4;
	t_list	*list;
	t_list	*temp;

	elem1 = ft_lstnew(ft_strdup("Elem1"));
	elem2 = ft_lstnew(ft_strdup("Elem2"));
	elem3 = ft_lstnew(ft_strdup("Elem3"));
	elem4 = ft_lstnew(ft_strdup("Elem4"));
	list = NULL;

	ft_lstadd_back(&list, elem1);
	ft_lstadd_back(&list, elem2);
	ft_lstadd_back(&list, elem3);
	ft_lstadd_back(&list, elem4);

	temp = list;
	while (temp)
	{
		printf("-- %s\n", (char *)temp->content);
		temp = temp->next;
	}
	printf("\n\n");
	t_list	*list2;
	list2 = ft_lstmap(list, &ft_to_up, &ft_del);
	temp = list2;
	while (temp)
	{
		printf("-- %s\n", (char *)temp->content);
		temp = temp->next;
	}
	ft_lstclear(&list, &ft_del);
	while (list2)
	{
		temp = list2->next;
		free(list2);
		list2 = temp;
	}
	return (0);
}
