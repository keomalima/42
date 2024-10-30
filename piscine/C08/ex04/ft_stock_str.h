/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricci-d <kricci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 15:25:12 by kricci-d          #+#    #+#             */
/*   Updated: 2024/08/30 15:28:06 by kricci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
#define FT_STOCK_STR_H

#include <stdlib.h>
#include <unistd.h>

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

typedef struct s_stock_str
{
	int	size;
	char	*str;
	char	*copy;
}		t_stock_str;

#endif
