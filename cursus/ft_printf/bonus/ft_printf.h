/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:50:20 by keomalima         #+#    #+#             */
/*   Updated: 2024/10/21 13:12:52 by keomalima        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>
# include <stdio.h>

typedef struct s_printf
{
	int		width;
	int		left_align;
	int		zero_pad;
	int		plus_sign;
	int		space_pad;
	int		hash_pad;
	int		precision;
	char	specifier;
	char	*str;
}	t_printf;

int		ft_printf(const char *format, ...);
int		ft_count_arg(char *format);
int		ft_nbr_len(int n, t_printf *item);
int		ft_struct_digit(char **format);
int		ft_cal_pad(t_printf *item, int nbr_len, int nbr);
int		ft_cal_zero_pad_prec(t_printf *item, int nbr_len, int nbr);
int		ft_cal_space_pad(t_printf *item, int nbr_len, int nbr, int zero_pad);
int		ft_nbr_uns_len(unsigned int n, t_printf *item);
int		ft_ptr_hex_len(size_t ptr);
int		ft_specifier_check(va_list *args, t_printf *item);
int		ft_format_int(va_list *args, t_printf *item);
int		ft_format_ptr(va_list *args, t_printf *item);
int		ft_print_int(t_printf *item, int nbr_len, int nbr);
int		ft_print_sign(t_printf *item, int nbr);
int		ft_print_int_prec(t_printf *item, int nbr_len, int nbr);
int		ft_str_len(char *format, t_printf *item);
int		ft_print_uns_int(t_printf *i, unsigned int n_len, unsigned int n);
int		ft_format_hex(va_list *args, t_printf *item);
int		ft_print_uns_int_prec(t_printf *i, unsigned int n_len, unsigned int n);
int		ft_print_hex(t_printf *item, int nbr_len, char *nbr, int n);
int		ft_print_hash(t_printf *item);
int		ft_format_char(va_list *args, t_printf *item);
int		ft_print_hex_prec(t_printf *item, int nbr_len, char *nbr, int n);
int		ft_print_char(t_printf *item, int c);
int		ft_print_str(t_printf *item, char *c);
int		ft_print_ptr(t_printf *item, int nbr_len, size_t nbr);
char	*ft_transf_hex(int nbr, int hex_len, t_printf *item);
char	*ft_transf_neg_hex(int nbr, t_printf *item);
char	*ft_convert_to_hex(int *tab, int index, char *hex_case);
void	ft_hex_ptr(size_t ptr, int len);
void	ft_tab_add(int *tab, int index);
void	ft_invert_tab(int *tab, int index, int nbr);
void	ft_putnbr_uns_printf_fd(unsigned int n, int fd);
void	ft_putchar_loop(char c, int nbr);
void	ft_putnbr_printf_fd(int n, int fd);
void	ft_struct_parse(char *format, t_printf *flags);
void	ft_str_loop(char *format, t_printf **itens, va_list *args, int *nbr);

#endif
