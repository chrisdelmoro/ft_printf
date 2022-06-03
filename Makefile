all:
	$(MAKE) -C ./libft/

clean:
	rm -f $(OBJ) $(BOBJ) $(ADDOBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re