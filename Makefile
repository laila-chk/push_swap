MANDATORY=push_swap.c ft_calloc.c ft_split.c join_all_args.c ft_strjoin.c ft_strlen.c\
		  check_type.c check_valid_args.c operations_1.c operations_2.c operations_3.c\
		  sort_three.c sort_five.c sort_alot.c ft_sort.c

BONUS=checker.c checker_utils.c check_type.c check_valid_args.c ft_calloc.c ft_sort.c ft_split.c ft_strjoin.c\
	  ft_strncmp.c get_next_line.c get_next_line_utils.c instructions_2.c instructions_3.c join_all_args.c\
	  operations_1.c operations_2.c operations_3.c sort_alot.c sort_five.c sort_three.c ft_strlen.c

CC = cc 

CFLAGS = -Wall -Wextra -Werror

NAME = push_swap

NAME_BONUS = checker

O_MANDATORY = $(MANDATORY:.c=.o)

O_BONUS = $(BONUS:.c=.o)

all : $(NAME)

bonus : $(NAME_BONUS) 
	
$(NAME): $(O_MANDATORY) 
	$(CC) $(CFLAGS) $(O_MANDATORY) -o push_swap

$(NAME_BONUS): $(O_BONUS)
	$(CC) $(CFLAGS) $(O_BONUS) -o checker

clean : 
	rm -rf $(O_MANDATORY) $(O_BONUS)

fclean : clean
	rm -rf checker push_swap

re : fclean all

.PHONY: re all fclean clean bonus