NAME = libftprintf.a
CFLAGS = -Wall -Werror -Wextra
src = ft_printf.c ft_put.c

OBJ = $(src:.c=.o)



all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)


%.o: %.c printf.h
	@cc $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean