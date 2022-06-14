NAME		= libftprintf.a

LIBFT_DIR	= ./libft/
LIBFT 		= $(LIBFT_DIR)/libft.a

SRC_DIR		= ./src/
SRC			=	$(SRC_DIR)ft_printf.c \
				$(SRC_DIR)ft_put_u.c \
				$(SRC_DIR)ft_put_xX.c \
				$(SRC_DIR)ft_put_p.c \
				$(SRC_DIR)ft_put_s.c \
				$(SRC_DIR)ft_put_di.c

OBJ			= $(SRC:.c=.o)

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC)
	$(MAKE) full -C $(LIBFT_DIR)
	cp $(LIBFT) $(NAME)
	$(CC) $(CFLAGS) -c $(SRC) -I ./include/
	mv *.o ./src/
	ar -rc $(NAME) $(OBJ)

clean:
	rm -f $(LIBFT_DIR)*.o
	rm -f $(SRC_DIR)*.o

fclean: clean
	rm -f $(LIBFT_DIR)*.a
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re