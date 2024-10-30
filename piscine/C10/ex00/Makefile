# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kricci-d <kricci-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/05 10:30:18 by kricci-d          #+#    #+#              #
#    Updated: 2024/09/05 13:50:22 by kricci-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: ft_display_file

ft_display_file: ft_display_file.o
	gcc ft_display_file.o -o ft_display_file

ft_display_file.o: ft_display_file.c
	gcc -Wall -Werror -Wextra -c ft_display_file.c

clean:
	rm -f *.o ft_display_file

fclean: clean

