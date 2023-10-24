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

all:	make_lib

compile:	re
	gcc main.c -L. -lmy

make_lib:
	cp $(SRC) lib/my
	make re -C lib/my

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

aclean:	fclean
	make aclean -C lib/my
	rm a.out

re:	fclean all
