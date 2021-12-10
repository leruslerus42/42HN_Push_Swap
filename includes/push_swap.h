/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:15:57 by coder             #+#    #+#             */
/*   Updated: 2021/12/10 20:16:26 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# include "../libft/libft.h"

# define TRUE 1
# define FALSE 0
# define ERROR "Error \n"

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
	struct s_node	*previous;
}	t_node;

typedef struct s_stack
{
	int		size;

	t_node	*node;
}	t_stack;

/*
   gcc ./main.c ./src/ft_parsing.c ./src/ft_push_swap_utils.c ./src/ft_push_swap_utils2.c ./libft/ft_atoi.c ./libft/ft_split.c ./libft/ft_substr.c ./libft/ft_isdigit.c ./libft/ft_strlen.c ./src/ft_error_management.c ./src/ft_operation_swap_and_push.c ./src/ft_operation_rotate_and_reverse.c
*/

/*************PARSING***************/
void	parsing(t_stack **a, char **argv, int argc);

/*************OPERATIONS***************/
int		swap(t_stack *stack, char c);
void	swap_x_2(t_stack *stack_a, t_stack *stack_b);
void 	push(t_stack **a, t_stack **b, char c);
void	ra_rb(t_stack *stack, int c);
void	rr(t_stack *stack_a, t_stack *stack_b, char c);
void	rra_rrb(t_stack *stack, int c);
void	rrr(t_stack *stack_a, t_stack *stack_b, char c);

/*************PUSH_SWAP_UTILS***************/
t_stack	*new_stack(void);
t_node	*new_node(t_stack *stack, int value, char c);
t_node	*last_node(t_stack *stack);
void	stack_add_front(t_stack **stack, t_node *new_start_node, char c);
void	stack_add_back(t_stack **stack, t_node *new_end_node);
int		get_stack_size(t_stack *stack);
void	index_reording(t_stack *stack);
t_node	*node_copy(t_node *original);


/*************FT_ERROR_MANAGEMENT***************/
void ft_error_double_digit(t_stack *stack, int num);
#endif