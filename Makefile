##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Make a lib and a binary mode of a cube ! Then a cube^2 !
##

SRC	=	main.c

NAME	=	push_swap

all:	$(NAME)

$(NAME):
	make -C lib/my
	gcc -o $(NAME) $(SRC) -Llib/my -lmy

clean:
	make -C lib/my clean

fclean:	clean
	make -C lib/my fclean

re:
	rm $(NAME)
	make -C lib/my fclean all
