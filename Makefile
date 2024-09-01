NAME = libft.a

SRC = $(wildcard *.c)
OBJ := $(SRC:%.c=%.o)

cc = cc

CCFLAGS = -I -Wall -Werror -Wextra

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all