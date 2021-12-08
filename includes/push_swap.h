#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

//# include "../libft./libft.h"

# define TRUE 1
# define FALSE 0

typedef struct s_node
{
	int	data;
	int	index;
}	t_node;

typedef struct s_stack
{
	int		size;

	t_node	*node;
}	t_stack;

/*************PUSH_SWAP_UTILS***************/
t_stack	**new_stack(void);
t_node	*new_node(int data);
t_node	*last_node(t_stack **stack);
void	stack_add_front(t_stack **stack, t_node *new_start_node);
void	stack_add_back(t_stack **stack, t_node *new_end_node);
int		get_stack_size(t_stack **stack);






# endif