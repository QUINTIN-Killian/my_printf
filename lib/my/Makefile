##
## EPITECH PROJECT, 2023
## undefined
## File description:
## Makefile for mylib
## Makefile
##

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

H_NAME	=	my.h

H_PRINTF_NAME	=	my_printf.h

all:	libmy.a copy_header

libmy.a:	create_lib copy_lib

create_lib:	$(OBJ)
	ar rc $(NAME) $(OBJ)

copy_lib:
	cp $(NAME) ../..

copy_header:
	cp $(H_NAME) ../../include
	cp $(H_PRINTF_NAME) ../../include

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME) ../../$(NAME)

re:	fclean all
