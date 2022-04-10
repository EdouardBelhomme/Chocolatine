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

CFLAGS = -I ./include/
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
