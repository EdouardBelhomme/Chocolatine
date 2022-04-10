##
## EPITECH PROJECT, 2022
## Chocolatine
## File description:
## Makefile
##

SRC	=	../src/hidenp.c \
	  	../src/lib/my_putchar.c \
	  	../src/lib/my_putstr.c \
	  	../src/lib/my_strcmp.c \
	  	../src/lib/my_strlen.c \
		test_hidenp.c

OBJ = 	$(SRC:.c=.o)

NAME = unit_tests

CFLAGS = -Wall -Werror -Wextra

LDFLAGS = -lcriterion --coverage

CPPFLAGS = -I ../include/

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) $(LDLIBS)

clean:
	rm -f $(OBJ) $(OBJ:.o=.gcno) $(OBJ:.o=.gcda)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re cc
