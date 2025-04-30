##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

INC 	= 	include/

SRC	=	my_isalnum.c\
		my_str_to_word_array.c\
		my_putchar.c\
		my_putstr.c\
		nb_len.c\
		my_strlen.c\
		my_put_nbr.c\
		my_show_word_array.c\
		my_isnum.c\
		$(wildcard ..//my_printf//*.c)

OBJ	=	$(SRC:.c=.o)

NAME 	= 	libmy.a

all: 	$(NAME)

$(NAME): 	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp my.h ../../$(INC)
	cp my.h ../my_printf

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: 	fclean all
