##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

INC 	= 	include/

SRC	=	../my/my_put_nbr.c\
		../my/nb_len.c\
		../my/my_putchar.c\
		../my/my_putstr.c\
		../my/my_isnum.c\
		../my/my_strlen.c\
		$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

NAME 	= 	libpf.a

all: 	$(NAME)

$(NAME): 	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: 	fclean all
