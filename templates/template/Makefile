##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

INC= 		include/

SRC=		main.c

OBJ=		$(SRC:.c=.o)

NAME=	 	info_file

CFLAGS  +=	 -Wall -Wextra -I ./include
LDFLAGS += 	 -Llib/my_printf -lpf -Llib/my -lmy -g

all: 	libpf.a libmy.a $(NAME)

$(NAME): 	$(OBJ)
	$(CC) -o $(NAME) $(SRC) $(LDFLAGS) $(CFLAGS)

libmy.a:
	make -C ./lib/my

libpf.a:
	make -C ./lib/my_printf

clean:
	rm -f $(OBJ)
	make -C ./lib/my clean
	make -C ./lib/my_printf clean

fclean: clean
	rm -f $(NAME)
	make -C ./lib/my fclean
	make -C ./lib/my_printf fclean

re: 	fclean all
	make -C ./lib/my re
	make -C ./lib/my_printf re
