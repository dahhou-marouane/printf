NAME = libftprintf.a
CFILES = -Wall -Werror -Wextra
SRC = ft_put.c

$(OBJ) = $(src:.c=.o)

$(NAME) : $(OBJ)
	@ar rcs $(NAME) $(OBJ)

all: $(NAME)

%.o: %.c printf.h
	@cc $(NAME) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean