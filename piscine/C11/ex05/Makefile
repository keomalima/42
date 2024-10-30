# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kricci-d <kricci-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/06 14:17:47 by kricci-d          #+#    #+#              #
#    Updated: 2024/09/06 14:42:06 by kricci-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror

all: do-op

do-op: ft_helpers.o ft_do_op.o ft_operators.o main.o
	$(CC) ft_helpers.o ft_do_op.o ft_operators.o main.o -o do-op 

ft_do_op.o: ft_do_op.c do_op.h
	$(CC) $(FLAGS) -c ft_do_op.c

ft_helpers.o: ft_helpers.c
	$(CC) $(FLAGS) -c ft_helpers.c

ft_operators.o: ft_operators.c
	$(CC) $(FLAGS) -c ft_operators.c

main.o: main.c do_op.h
	$(CC) $(FLAGS) -c main.c

clean:
	rm -f *.o do-op

fclean: clean
