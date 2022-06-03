all:
	$(MAKE) full -C ./libft/

clean:
	rm -f ./libft/*.o

fclean: clean
	rm -f ./libft/*.a

re: fclean all

.PHONY: all clean fclean re