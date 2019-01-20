##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile for my_printf
##

SRC	=	src/fct_105torus.c			\
		src/usage.c				\
		src/all_fonctions.c

SRC_M	=	src/main.c

SRC_T	=	tests/test_bisection.c	\
		tests/test_newton.c	\
		tests/test_secant.c	\
		tests/test_torus.c

OBJ	=	$(SRC:.c=.o)

OBJ_M	=	$(SRC_M:.c=.o)

NAME	=	105torus

NAME_T	=	unit_test

CFLAGS	=	-g -Iinclude -W -Wall -Wextra -lm

CFLAGS_T	=	-lcriterion --coverage

all:	$(NAME)

$(NAME):	$(OBJ) $(OBJ_M)
	gcc -o $(NAME) $(OBJ) $(OBJ_M) $(CFLAGS)

tests_run:
	gcc -o $(NAME_T) $(SRC) $(SRC_T) $(CFLAGS_T) -Iinclude -lm
	./$(NAME_T)

clean:
	rm -f $(OBJ) $(OBJ_M)
	rm -f vg* *.gc*

fclean:	clean
	rm -f $(NAME) $(NAME_T)

re:	fclean all
