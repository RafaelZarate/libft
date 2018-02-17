
NAME = libft.a

SRC = *.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc -Werror -Wall -Wextra -c $(SRC)
	ar rcs $(NAME) $(OBJ)

so:
	gcc -Werror -Wall -Wextra -c $(SRC)
	ar rcs libft.so $(OBJ)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
