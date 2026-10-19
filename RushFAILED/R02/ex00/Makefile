NAME = rush-02

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

SRCS = main.c ft_format.c ft_print.c \
	ft_print_block.c ft_print_scale.c ft_format_split.c \
	dict_parse.c dict_search.c dict_load.c dict_utils.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
