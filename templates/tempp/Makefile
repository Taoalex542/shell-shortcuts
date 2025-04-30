##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC=		$(wildcard ./*.cpp)

OBJ=		$(SRC:.cpp=.o)

NAME=	 	info_file

CXXFLAGS= 	-std=c++20 -Wall -Wextra -Werror

all: 	$(NAME)

$(NAME): 	$(OBJ)
	g++ $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)
	rm -f a.out

fclean: clean
	rm -f $(NAME)

re: 	fclean all

.PHONY: all $(NAME) clean fclean re
