##
## EPITECH PROJECT, 2023
## makefile
## File description:
## 10
##

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

DEBUG	=	debug

LIB		=	-lncurses



all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(SRC) -I./include/ $(LIB)

debug:		$(SRC)
	gcc -o $(DEBUG) $(SRC) -I./include/ -g -Wall -Wextra $(LIB)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(DEBUG)

re: fclean all