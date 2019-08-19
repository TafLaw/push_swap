# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/19 09:47:52 by tmuzeren          #+#    #+#              #
#    Updated: 2019/08/19 10:20:46 by tmuzeren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAME2 = checker

SRC = push_swap_main.c

SRC2 = checker_main.c

LIB = ./libft

CC = gcc

FLAGS = -Wall -Werror -Wextra

all = $(NAME)

$(NAME) :
	cd $(LIB) && make
	$(CC) $(FLAGS) -o $(NAME) $(SRC) libft/libft.a
	$(CC) $(FLAGS) -o $(NAME2) $(SRC2) libft/libft.a

clean :
	rm -f $(NAME) $(NAME2)

fclean :
	rm -f $(NAME) $(NAME2)
	cd $(LIB) && make fclean

re : fclean
	cd $(LIB) && make  
	$(CC) $(FLAGS) -o $(NAME) $(SRC) libft/libft.a
	$(CC) $(FLAGS) -o $(NAME2) $(SRC2) libft/libft.a

.PHONY : all clean fclean re
