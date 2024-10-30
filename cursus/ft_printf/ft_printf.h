/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:47:49 by keomalima         #+#    #+#             */
/*   Updated: 2024/10/18 17:24:32 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
void	ft_parse_format(const char *format, va_list *args, int *len);
void	ft_handle_specifier(char spec, va_list *args, int *len);
void	ft_print_int(char spec, va_list *arg, int *len);
void	ft_print_uns_to_fd(unsigned int n, int fd);
void	ft_print_char(char spec, va_list *arg, int *len);
void	ft_print_hex(char spec, va_list *arg, int *len);
void	ft_print_ptr(va_list *arg, int *len);

#endif
