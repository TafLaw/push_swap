# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/24 09:59:52 by tmuzeren          #+#    #+#              #
#    Updated: 2019/08/19 11:25:37 by tmuzeren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

FLAGS = -Wall -Werror -Wextra

SRCS = ../trav.c ../push_ab.c ../operations.c ../delete_n.c ../find_min_loc.c ../s_chunk.c ../generate.c ../create_stack.c ../do_op.c ../sorted.c ../checker.c ../empty.c ../push.c ../rotate.c ../swap.c ../get_next_line.c ../ft_lstlen.c ../sort.c ft_islower.c ft_isupper.c ft_strndup.c ft_atoi.c ft_putchar_fd.c ft_strmap.c ft_bzero.c ft_putendl.c ft_strmapi.c ft_putendl_fd.c ft_strncat.c ft_digit_count.c ft_putnbr.c ft_strncmp.c	ft_isalnum.c ft_putnbr_fd.c ft_strncpy.c ft_isalpha.c ft_putstr.c ft_strnequ.c ft_isascii.c ft_putstr_fd.c ft_strnew.c ft_isdigit.c	ft_strcat.c	ft_strnstr.c ft_isprint.c ft_strchr.c ft_strrchr.c ft_itoa.c ft_strclr.c ft_strrev.c ft_strcmp.c ft_strsplit.c ft_memalloc.c ft_strcpy.c ft_strstr.c ft_memccpy.c ft_strdel.c ft_strsub.c ft_memchr.c ft_strdup.c ft_strtrim.c ft_memcmp.c ft_strequ.c ft_tolower.c ft_memcpy.c ft_striter.c ft_toupper.c ft_memdel.c ft_striteri.c ft_memmove.c ft_strjoin.c ft_memset.c ft_strlcat.c ft_putchar.c ft_strlen.c

OBJ = 	trav.o push_ab.o operations.o delete_n.o find_min_loc.o s_chunk.o create_stack.o generate.o do_op.o sorted.o checker.o empty.o push.o rotate.o swap.o get_next_line.o ft_lstlen.o sort.o ft_islower.o ft_isupper.o ft_strndup.o ft_atoi.o ft_putchar_fd.o ft_strmap.o ft_bzero.o ft_putendl.o ft_strmapi.o ft_putendl_fd.o ft_strncat.o ft_digit_count.o ft_putnbr.o ft_strncmp.o	ft_isalnum.o ft_putnbr_fd.o ft_strncpy.o ft_isalpha.o ft_putstr.o ft_strnequ.o ft_isascii.o ft_putstr_fd.o ft_strnew.o ft_isdigit.o ft_strcat.o ft_strnstr.o ft_isprint.o ft_strchr.o ft_strrchr.o ft_itoa.o ft_strclr.o ft_strrev.o ft_strcmp.o ft_strsplit.o ft_memalloc.o ft_strcpy.o ft_strstr.o ft_memccpy.o ft_strdel.o ft_strsub.o ft_memchr.o ft_strdup.o ft_strtrim.o ft_memcmp.o ft_strequ.o ft_tolower.o ft_memcpy.o ft_striter.o ft_toupper.o ft_memdel.o ft_striteri.o ft_memmove.o ft_strjoin.o ft_memset.o ft_strlcat.o ft_putchar.o ft_strlen.o

all : $(NAME)

$(NAME) :
	$(CC) -c $(FLAGS) $(SRCS)
	ar rc $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean :
	rm -f $(OBJ) $(NAME)

re : fclean all  

.PHONY : all clean fclean re
