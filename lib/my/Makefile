##
## EPITECH PROJECT, 2023
## makefile
## File description:
## 10
##

SRC	=	convert.c	\
		flag_p.c	\
		flag_u.c	\
		my_put_nbr.c	\
		my_putchar.c	\
		my_flag.c	\
		my_putfloat.c	\
		my_putstr.c	\
		my_strupcase.c	\
		my_strlen.c	\
		flag_e.c	\
		flag_g.c	\
		flag_h.c	\
		flag_l.c	\
		flag_lu.c	\
		my_printf.c	\
		flag_m.c	\
		flag_hu.c	\
		flag_lo.c	\
		flag_ho.c	\
		flag_hash.c	\
		flag_hx.c	\
		flag_lx.c  \
		flag_lu.c  \
		flag_l.c   \
		flag_lo.c	\
		flag_llx.c  \
		flag_llu.c  \
		flag_ll.c   \
		flag_llo.c	\
		my_compute_power_rec.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	mv $(NAME) ../../

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
