##
## EPITECH PROJECT, 2023
## B-CPE-210-LYN-2-1-stumper2-killian.cottrelle
## File description:
## Makefile
##

SRC	=	main.c	\
		create_maps.c	\
		edit_maps.c	\
		cell_dies.c	\
		action.c	\

OBJ	=	$(SRC:.c=.o)

NAME = gameoflife

CFLAGS += -g3 -Wall -Werror -I./include -L./lib/my -lmy

LDFLAGS += -L./lib/my -lmy

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	$(CC) -o $@ $^ $(LDFLAGS)

clean:
	$(MAKE) -C lib/my clean
	rm -f *.o $(OBJ)

fclean: clean
	$(MAKE) -C lib/my fclean
	rm -f $(NAME)

re: fclean all

.PHONY: re clean fclean all
