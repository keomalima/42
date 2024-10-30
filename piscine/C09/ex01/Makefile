# Variables
CC = gcc
CFLAGS = -Wall -Werror -Wextra -c
AR = ar rcs
LIB_NAME = libmylibrary.a
SRC_DIR = src
SRCS = $(SRC_DIR)/file1.c $(SRC_DIR)/file2.c $(SRC_DIR)/file3.c
OBJS = $(SRCS:.c=.o)

# Targets
all: $(LIB_NAME)

$(LIB_NAME): $(OBJS)
	$(AR) $(LIB_NAME) $(OBJS)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJS) $(LIB_NAME)

fclean: clean

re: fclean all

