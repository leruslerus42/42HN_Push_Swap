/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:15:57 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/01/21 05:45:40 by rrajaobe         ###   ########.fr       */
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

typedef struct s_node
{
	int				value;
	int				new_value;
	int				index;
	int				flag;

	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	int		size;
	int		ops;

	t_node	*node;
}	t_stack;

/*************PARSING***************/
void	parsing(t_stack **a, char **argv, int argc);

/*************OPERATIONS***************/
void	swap(t_stack *stack, char c, int checker);
void	swap_x_2(t_stack *stack_a, t_stack *stack_b, int checker);
void	push(t_stack **a, t_stack **b, char c, int checker);
void	push_2(t_stack **a, t_stack **b, int checker);
void	rotate(t_stack *stack, int c, int checker);
void	rotate_x_2(t_stack *stack_a, t_stack *stack_b, int checker);
void	reverse(t_stack *stack, int c, int checker);
void	reverse_x_2(t_stack *stack_a, t_stack *stack_b, int checker);

/*************PUSH_SWAP_UTILS***************/
t_stack	*new_stack(void);
t_node	*new_node(t_stack *stack, int value, int new_value, char c);
t_node	*last_node(t_stack *stack);
void	stack_add_front(t_stack **stack, t_node *new_start_node, char c);
void	stack_add_back(t_stack **stack, t_node *new_end_node);
int		get_stack_size(t_stack *stack);
void	index_reording(t_stack *stack);
int		ft_stack_sorted(t_stack *a);
void	stack_first_reindexing(t_stack *stack);
void	stack_first_reindexing_p2(t_stack *stack, t_node *temp, int min, int i);

/*************FT_ALGORITHMUS***************/
void	algorithmus_x_3(t_stack *a);
void	algorithmus_x_5(t_stack *a, t_stack *b);
void	universal_algorithmus(t_stack *a, t_stack *b);

/*************FT_ALGORITHMUS_HELPERS***************/
void	find_maximum_first_time(t_stack *stack, int *p_max, int *p_index_max);
void	find_minimum_first_time(t_stack *stack, int *p_min, int *p_index_min);
void	find_maximum(t_stack *stack, int *p_max, int *p_index_max);
void	find_minimum(t_stack *stack, int *p_min, int *p_index_min);
void	print_stack(t_stack *a, t_stack *b, char c);
void	print_stack_with_new_values(t_stack *a, t_stack *b);

/*************FT_ERROR_MANAGEMENT***************/
void	ft_error_double_digit(t_stack *stack, int num);
void	ft_free(t_stack *stack);
void	ft_exit(int case_num);


/********************BONUS_CHECKER***************/
void	checker(t_stack *a, t_stack *b);
char	*get_next_line(int fd);
void	parsing_checker(t_stack **a, char *buf, int argc);
char	**ft_split_with_size_on_last_value(char const *s, char c);

/****************LIBFT HELP FUNCTIONS***********/
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_isdigit(int c);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);

#endif
