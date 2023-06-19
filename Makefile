##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## my_ls
##

SRC = src/main.c	\
	src/mini_printf.c	\
	src/my_ls.c	\
	src/error.c	\
	src/my_putchar.c	\
	src/my_put_nbr.c	\
	src/my_strlen.c	\
	src/my_putstr.c
OBJ	=	$(SRC:.c=.o)

NAME = my_ls

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(SRC) -Wall -Wextra -I include -o $(NAME) -g

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
