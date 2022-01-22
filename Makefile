# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrajaobe < rrajaobe@student.42heilbronn    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/08 11:32:23 by coder             #+#    #+#              #
#    Updated: 2022/01/22 23:08:59 by rrajaobe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = push_swap

FLAGS =  -Wall -Wextra -Werror -g

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
		./src/ft_algoritmus.c \
		./src/ft_algoritmus_helper.c \
		./libft/ft_help_functions.c \
		./libft/ft_help_functions2.c \

BONUS = ./src/bonus/checker.c

all : $(NAME)

$(NAME): ./src/*.c main.c
	make -C ${LIBFTPATH}
	cp ${LIBFTPATH}${LIBFT} ${LIBFT}
	$(CC) $(SRC) $(FLAGS) $(BONUS) -o $(NAME) -D BONUS=0

bonus: ./src/*.c main.c ./src/bonus/checker.c
	make -C ${LIBFTPATH}
	cp ${LIBFTPATH}${LIBFT} ${LIBFT}
	$(CC) $(FLAGS) $(SRC) $(BONUS) -o $(NAME) -D BONUS=1

valgrind:
		./push_swap
clean:
	rm -f ./libft/*.o
	rm -f *.o
	rm -rf push_swap

fclean: clean
	rm -f ${LIBFT} ${OBJ} ${NAME}

re: fclean ${NAME}