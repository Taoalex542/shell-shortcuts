##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

INC= 		include/

SRC=		$(wildcard .//lib//my//*.c)\
			main.c

OBJ=		$(SRC:.c=.o)

NAME=	 	info_file

CFLAGS  +=	 -Wall -Wextra -I ./lib/src

all: 	$(NAME)

$(NAME): 	$(OBJ)
	gcc -o $(NAME) $(CFLAGS) $(OBJ)
	rm *.o

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: 	fclean all

.PHONY: all $(NAME) clean fclean re
