# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: coder <coder@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/08 11:32:23 by coder             #+#    #+#              #
#    Updated: 2021/12/08 11:32:26 by coder            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = push_swap

FLAGS = -Wall -Wextra -Werror

OBJ := $(*.o)

SRC = ./main.c \

all : $(NAME)

$(NAME): fclean
	$(CC) $(SRC) -o $(NAME)
#dont forget flags

clean:
	rm -f *.o

fclean: clean
	rm -f ${OBJ} ${NAME}

re: fclean ${NAME}