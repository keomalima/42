/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricci-d <kricci-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:10:48 by kricci-d          #+#    #+#             */
/*   Updated: 2024/08/29 18:06:15 by kricci-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

#include <unistd.h>

typedef int t_bool;

#define TRUE 1
#define FALSE 0
#define SUCCESS 0
#define EVEN(nbr) ((nbr) % 2 == 0)
#define EVEN_MSG "I have an even number of arguments"
#define ODD_MSG "I have an odd number of arguments"

#endif
