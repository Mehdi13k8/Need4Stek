##
## EPITECH PROJECT, 2018
## make
## File description:
## make
##

SRC	=	main.c			\
		my_params_to_list.c	\
		str_to_tab.c		\
		get_next_line.c		\
		src.c			\
		finish.c		\
		speed.c			\
		speed_two.c		\
		fct.c			\


NAME	=	ai

all:
	$(MAKE) -C lib
	gcc $(SRC) -o $(NAME) lib/libmy.a -lm

clean:
	rm -f *~
	rm -f *#
	cd lib; $(MAKE) clean

fclean:	clean
	rm -f $(NAME)
	cd lib; $(MAKE) fclean

re: fclean all
	cd lib; $(MAKE) re
