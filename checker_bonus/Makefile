CC = cc 
FLAGS = -Wall -Wextra -Werror
SRC = push_swap_bonus.c movments_a_bonus.c tab_sort_bonus.c tools_bonus.c tools_2_bonus.c \
	ft_split_bonus.c sort_bonus.c main_sorting_bonus.c checks_bonus.c tools_4_bonus.c checker_bonus.c \
	tools_3_bonus.c free_bonus.c clean_exit_bonus.c small_sort_bonus.c movments_b_bonus.c movments_bonus.c \
	get_next_line_bonus.c get_next_line_utils_bonus.c
OBJ = $(SRC:.c=.o)
NAME = checker_bonus

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