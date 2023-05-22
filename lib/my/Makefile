##
## EPITECH PROJECT, 2023
## libmy_EPITECH
## File description:
## Makefile
##

SRC	=	my_getnbr.c	\
		my_put_array.c	\
		my_array_length.c	\
		my_put_nbr.c	\
		my_putchar.c	\
		my_putstr.c	\
		my_strlen.c	\
		my_str_to_tab.c	\
		my_open_file.c	\

OBJ	=	$(SRC:.c=.o)

NAME = libmy.a

CFLAGS += -g3 -Wall

LDFLAGS += -I ./include

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $@ $^
debug:
	$(CC) -g -o $(NAME) $(SRC) $(LDFLAGS)

clean:
	rm -f *.o $(OBJ)

fclean: clean
	rm -f libmy.a
	rm -f $(NAME)

re: fclean all

.PHONY: re clean fclean all
