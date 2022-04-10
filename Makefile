##
## EPITECH PROJECT, 2022
## Solo Stumper 2
## File description:
## Makefile
##

NAME	= hidenp

CC	= gcc

RM	= rm -f

SRCS	= ./src/hidenp.c \
	  ./src/lib/my_putchar.c \
	  ./src/lib/my_putstr.c \
	  ./src/lib/my_strcmp.c \
	  ./src/lib/my_strlen.c \
	  ./src/main.c 

OBJS	= $(SRCS:.c=.o)

CPPFLAGS = -I ./include/
CFLAGS += -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(CFLAGS) $(CPPFLAGS)

clean:
	make clean -C tests/
	$(RM) $(OBJS) $(OBJS:.o=.gcno) $(OBJS:.o=.gcda)

fclean: clean
	make fclean -C tests/
	$(RM) $(NAME)

re: fclean all

unit_tests: CFLAGS += --coverage
unit_tests: fclean all
	make -C tests/

tests_run: unit_tests
	./tests/unit_tests

.PHONY: all clean fclean re
