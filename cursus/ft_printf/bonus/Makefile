# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/10 15:02:49 by keomalima         #+#    #+#              #
#    Updated: 2024/10/16 18:49:11 by keomalima        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = CC
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
RM = rm -rf

SRCS = ft_format_int.c ft_nbr_len.c ft_print_int.c\
		ft_printf.c ft_calculate_paddings.c \
		ft_putnbr_printf_fd.c ft_specifier_check.c \
		ft_struct_parse.c  ft_format_char.c\
		ft_print_char.c ft_format_hex.c \
		ft_print_hex.c ft_transf_neg_hex.c \
		ft_format_ptr.c ft_print_ptr.c

OBJS_DIR = objects
OBJS = $(SRCS:%.c=$(OBJS_DIR)/%.o)

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

all: $(OBJS_DIR) $(NAME)

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(NAME): $(OBJS) $(LIBFT)
	ar rcs $(NAME) $(OBJS)

$(OBJS_DIR)/%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@ -I$(LIBFT_PATH) -I$(LIBFT)

$(LIBFT):
	make -C $(LIBFT_PATH)
	cp $(LIBFT) $(NAME)

clean:
	make -C $(LIBFT_PATH) clean
	$(RM) $(OBJS) $(OBJS_DIR)

fclean: clean
	make -C $(LIBFT_PATH) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re libft
