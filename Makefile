##
## EPITECH PROJECT, 2023
## undefined
## File description:
## Makefile for my_cat
## Makefile
##

SRC	=	my_printf.c	\
		error_handling.c	\
		flags/percent.c	\
		flags/c.c	\
		flags/d.c	\
		flags/i.c	\
		flags/s.c	\
		flags/u.c	\
		flags/x.c	\
		flags/x_maj.c	\
		flags/o.c	\
		flags/e.c	\
		flags/e_maj.c	\
		flags/p.c	\
		flags/n.c	\
		flags/f_f_maj.c	\
		flags/g_g_maj.c	\
		atribute_char/hashtag.c	\
		atribute_char/zero.c	\
		atribute_char/minus.c	\
		atribute_char/space.c	\
		atribute_char/plus.c

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

re:	fclean all
