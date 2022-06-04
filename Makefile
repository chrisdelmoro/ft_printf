NAME		= libftprintf.a

LIBFT_DIR	= ./libft/
LIBFT 		= $(LIBFT_DIR)/libft.a

SRC_DIR		= ./src/
SRC			= $(SRC_DIR)ft_printf.c

OBJ			= $(SRC:.c=.o)

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC) -I ./include/
	mv ft_printf.o ./src/
	ar -rc $(NAME) $(OBJ)
	$(MAKE) full -C $(LIBFT_DIR)
	cp $(LIBFT) $(NAME)

clean:
	rm -f $(LIBFT_DIR)*.o
	rm -f $(SRC_DIR)*.o

fclean: clean
	rm -f $(LIBFT_DIR)*.a
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re