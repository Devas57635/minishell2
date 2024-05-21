##
## EPITECH PROJECT, 2024
## B-PSU-200-NCY-2-1-minishell2-antoine.schoeser
## File description:
## Makefile
##

SRC			=	$(wildcard src/*.c)

OBJ			=	$(SRC:.c=.o)

NAME		=	mysh

CFLAGS		=	-Wall -Wextra -I include -g -lm

$(ALL):		$(NAME)

$(NAME):	$(OBJ)
			gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean $(NAME)
