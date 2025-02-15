CC = cc 
FLAGS = -Wall -Wextra -Werror
SRC = push_swap.c movments_a.c tab_sort.c tools.c tools_2.c \
	ft_split.c sort.c main_sorting.c checks.c tools_4.c \
	tools_3.c free.c clean_exit.c small_sort.c movments_b.c
OBJ = $(SRC:.c=.o)
NAME = push_swap

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean fclean all

.PHONY: all clean fclean re
.SECONDARY: