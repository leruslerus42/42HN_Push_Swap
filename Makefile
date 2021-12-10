# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: coder <coder@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/08 11:32:23 by coder             #+#    #+#              #
#    Updated: 2021/12/10 12:32:53 by coder            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = push_swap

FLAGS = -Wall -Wextra -Werror

LIBFTPATH = ./libft/

LIBFT = libft.a

OBJ := $(*.o)

SRC = 	./main.c \
		./src/ft_parsing.c \
		./src/ft_push_swap_utils.c \
		./src/ft_push_swap_utils2.c \
		./src/ft_error_management.c \
		./src/ft_operation_swap_and_push.c \
		./src/ft_operation_rotate_and_reverse.c \

all : $(NAME)

$(NAME): fclean
	make -C ${LIBFTPATH}
	mv ${LIBFTPATH}${LIBFT} ${LIBFT}
	$(CC) ${LIBFT} $(SRC) -o $(NAME)
#dont forget flags

clean:
	rm -f ./libft/*.o
	rm -f *.o

fclean: clean
	rm -f ${LIBFT}${OBJ} ${NAME}

re: fclean ${NAME}