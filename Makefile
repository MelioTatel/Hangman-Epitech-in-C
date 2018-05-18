##
## EPITECH PROJECT, 2018
## makefile
## File description:
## do the compilator for the duostumper5
##

SRC	=	src/strcmp.c		\
		src/game.c		\
		src/my_strlen.c		\
		src/my_putstr.c		\
		src/my_puttab.c		\
		src/my_str_to_wordtab.c	\
		src/get_next_line.c	\
		src/my_getnbr.c		\
		src/hangman.c		\
		src/my_put_nbr.c	\
		src/main.c

INC	=	-I./

CFLAGS	=	-g $(INC)

OBJ	=	$(SRC:.c=.o)

NAME	=	hangman

all:		$(OBJ)
	gcc -o $(NAME) $(OBJ) $(INC) -lm 

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
