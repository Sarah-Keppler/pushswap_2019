##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Make(haha) your own lib !!!!
##

SRC	=	my_putchar.c		\
		my_putstr.c		\
		my_put_nbr.c		\
		my_strlen.c		\
		my_getnbr.c		\
		pushswap.c		\
		op_swap.c		\
		op_put.c		\
		op_rev.c		\
		op_rrev.c		\
		error.c			\
		algo.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp my.h ../../include/
	cp pushswap.h ../../include/
	cp operation.h ../../include/
	cp $(NAME) ../

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
