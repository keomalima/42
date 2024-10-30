# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: keomalima <keomalima@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/10 15:02:49 by keomalima         #+#    #+#              #
#    Updated: 2024/10/18 17:24:15 by keomalima        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = CC
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
RM = rm -rf

SRCS = ft_printf.c ft_print_int.c \
		ft_print_char.c ft_print_hex.c \
		ft_print_ptr.c

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
