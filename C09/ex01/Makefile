# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: callwood <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/26 08:32:32 by callwood          #+#    #+#              #
#    Updated: 2026/08/26 08:33:07 by callwood         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = srcs
INC_DIR = includes

SRCS = $(SRC_DIR)/ft_putchar.c \
       $(SRC_DIR)/ft_swap.c \
       $(SRC_DIR)/ft_putstr.c \
       $(SRC_DIR)/ft_strlen.c \
       $(SRC_DIR)/ft_strcmp.c

OBJS = $(SRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
