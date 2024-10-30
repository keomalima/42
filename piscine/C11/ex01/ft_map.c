/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricci-d <kricci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:34:11 by kricci-d          #+#    #+#             */
/*   Updated: 2024/09/05 16:48:59 by kricci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*t;
	int	i;

	t = malloc(sizeof (int) * length);
	if (!t)
		return (NULL);
	i = 0;
	while (i++ < length)
		*t++ = f(*tab++);
	return (t);
}
