##
## EPITECH PROJECT, 2023
## undefined
## File description:
## Makefile for my_cat
## Makefile
##

SRC	=	my_printf.c

OBJ	=	$(SRC:.c=.o)

NAME	=	a.out

all:	libmy.a compile

libmy.a:
	make re -C lib/my

compile:	$(OBJ)
	gcc -o $(NAME) $(OBJ) -Llib/my -lmy

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

aclean:	fclean
	make aclean -C lib/my

re:	aclean all
