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
		flags/b.c	\
		atribute_char/is_atribute_char.c	\
		atribute_char/hashtag.c	\
		atribute_char/zero.c	\
		atribute_char/minus.c	\
		atribute_char/space.c	\
		atribute_char/plus.c	\
		atribute_char/atribute_char.c	\
		atribute_char/atribute_char_on_a.c	\
		atribute_char/atribute_char_on_d.c	\
		atribute_char/atribute_char_on_e.c	\
		atribute_char/atribute_char_on_e_maj.c	\
		atribute_char/atribute_char_on_f_f_maj.c	\
		atribute_char/atribute_char_on_g_g_maj.c	\
		atribute_char/atribute_char_on_i.c	\
		atribute_char/atribute_char_on_o.c	\
		atribute_char/atribute_char_on_x.c	\
		atribute_char/atribute_char_on_x_maj.c	\
		precision/is_precision.c	\
		precision/precision.c	\
		length_modifier/is_length_modifier.c	\
		length_modifier/get_length_modifier.c	\
		length_modifier/hh.c	\
		length_modifier/h.c	\
		length_modifier/l.c	\
		length_modifier/ll.c	\
		length_modifier/q.c	\
		length_modifier/l_maj.c	\
		length_modifier/j.c	\
		length_modifier/z.c	\
		length_modifier/z_maj.c	\
		length_modifier/t.c	\
		length_modifier/length_modifier_on_d/length_modifier_on_d.c	\
		length_modifier/length_modifier_on_d/hh_on_d.c	\
		length_modifier/length_modifier_on_d/h_on_d.c	\
		length_modifier/length_modifier_on_d/l_on_d.c	\
		length_modifier/length_modifier_on_d/ll_on_d.c	\
		length_modifier/length_modifier_on_d/j_on_d.c	\
		length_modifier/length_modifier_on_d/z_on_d.c	\
		length_modifier/length_modifier_on_d/t_on_d.c	\
		length_modifier/length_modifier_on_i/length_modifier_on_i.c	\
		length_modifier/length_modifier_on_i/hh_on_i.c	\
		length_modifier/length_modifier_on_i/h_on_i.c	\
		length_modifier/length_modifier_on_i/l_on_i.c	\
		length_modifier/length_modifier_on_i/ll_on_i.c	\
		length_modifier/length_modifier_on_i/j_on_i.c	\
		length_modifier/length_modifier_on_i/z_on_i.c	\
		length_modifier/length_modifier_on_i/t_on_i.c	\
		length_modifier/length_modifier_on_o/length_modifier_on_o.c	\
		length_modifier/length_modifier_on_o/hh_on_o.c	\
		length_modifier/length_modifier_on_o/h_on_o.c	\
		length_modifier/length_modifier_on_o/l_on_o.c	\
		length_modifier/length_modifier_on_o/ll_on_o.c	\
		length_modifier/length_modifier_on_o/j_on_o.c	\
		length_modifier/length_modifier_on_o/z_on_o.c	\
		length_modifier/length_modifier_on_o/t_on_o.c	\
		length_modifier/length_modifier_on_u/length_modifier_on_u.c	\
		length_modifier/length_modifier_on_u/hh_on_u.c	\
		length_modifier/length_modifier_on_u/h_on_u.c	\
		length_modifier/length_modifier_on_u/l_on_u.c	\
		length_modifier/length_modifier_on_u/ll_on_u.c	\
		length_modifier/length_modifier_on_u/j_on_u.c	\
		length_modifier/length_modifier_on_u/z_on_u.c	\
		length_modifier/length_modifier_on_u/t_on_u.c	\
		length_modifier/length_modifier_on_x/length_modifier_on_x.c	\
		length_modifier/length_modifier_on_x/hh_on_x.c	\
		length_modifier/length_modifier_on_x/h_on_x.c	\
		length_modifier/length_modifier_on_x/l_on_x.c	\
		length_modifier/length_modifier_on_x/ll_on_x.c	\
		length_modifier/length_modifier_on_x/j_on_x.c	\
		length_modifier/length_modifier_on_x/z_on_x.c	\
		length_modifier/length_modifier_on_x/t_on_x.c	\
		length_modifier/length_modifier_on_x_maj/length_modifier_on_x_maj.c	\
		length_modifier/length_modifier_on_x_maj/hh_on_x_maj.c	\
		length_modifier/length_modifier_on_x_maj/h_on_x_maj.c	\
		length_modifier/length_modifier_on_x_maj/l_on_x_maj.c	\
		length_modifier/length_modifier_on_x_maj/ll_on_x_maj.c	\
		length_modifier/length_modifier_on_x_maj/j_on_x_maj.c	\
		length_modifier/length_modifier_on_x_maj/z_on_x_maj.c	\
		length_modifier/length_modifier_on_x_maj/t_on_x_maj.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	a.out

all:	make_lib

make_lib:
	cp $(SRC) lib/my
	make re -C lib/my

clean:
	rm -f $(OBJ)
	make clean -C lib/my

fclean:	clean
	rm -f $(NAME)
	make fclean -C lib/my

re:	fclean all
