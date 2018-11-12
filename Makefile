NAME = ft_ssl

SRC = src/main.c src/parser.c

FLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OB)
	cd libft/ && $(MAKE)
	gcc -o $(NAME) $(OBJ) libft/libft.a

%.o : %.c
	gcc $(FLAGS) -c $< -o $@



clean:
	rm -f $(OBJ)
	make clean libft/

fclean: clean
	rm -f $(NAME)
	make fclean libft/

re: fclean all
