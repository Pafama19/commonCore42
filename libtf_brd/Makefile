NAME = libft.a
SRC = isalpha.c
OBJ = $(SRC: .c=.o)
CC = cc
CFLAGS = -Well -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
		$(AR) -r $@ $?

%.o: %.c
	$(CC) -o $@ -c $(CFLAGS) $<

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re 