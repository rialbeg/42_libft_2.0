LIBH = libft.h
NAME = libft.a
CODEDIRS =.
CFILES=$(foreach D,$(CODEDIRS),$(wildcard $(D)/*.c))

CFLAGS = -Wall -Wextra -Werror
CC = gcc
OBJ = $(CFILES:.c=.o)


all: $(NAME)
	
$(NAME):$(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAG) -c $^
	
clean:
	rm -rf $(OBJ) $(BONUS_OBJ)

fclean:clean
	rm -rf $(NAME)

re: fclean all
