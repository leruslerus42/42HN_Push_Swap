/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:38:58 by coder             #+#    #+#             */
/*   Updated: 2021/12/10 19:10:14 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*new_stack(void)
{
	t_stack	*stack;

	stack = malloc(sizeof(*stack));
	if (!stack)
		return (0);
	stack->size = 0;
	return (stack);
}

t_node	*new_node(t_stack *stack, int value, char c)
{
	t_node		*node;
	static int	i = 0;
	static int	j = 0;

	node = malloc(sizeof(*node));
	if (!node)
		return (0);
	node->value = value;
	node->next = NULL;
	stack->size ++;
	if (c == 'a')
	{	
		i++;
		node->index = i;
	}
	else if (c == 'b')
	{
		j++;
		node->index = j;
	}	

	//node->previous = ;
	//care, if u do new node, could be conflict with index, since they are always incrementating.
	return (node);
}

t_node	*last_node(t_stack *stack)
{
	t_node	*first_node;

	if (!(stack)->node)
		return NULL;
	first_node = (stack)->node;
	while (first_node->next)
		first_node = first_node->next;
	return (first_node);
}


void	stack_add_front(t_stack **stack, t_node *new_start_node, char c)
{
	t_node	*old_first_node;

	if (!stack)
		return ;	

	old_first_node = new_node(*stack, (*stack)->node->value, c);
	//possible stack size +grossa di piu 1 perche un new in piu (by function call hai anche un uno)
	//freee me, since mem position of old first node lost reference
	old_first_node->next = (*stack)->node->next;
	(*stack)->node = new_start_node;
	new_start_node->next = old_first_node;
	index_reording(*stack);	
}

void	stack_add_back(t_stack **stack, t_node *new_end_node)
{
	t_node	*old_last_node;
	
	if (!new_end_node)
		return ;
	if (!(*stack)->node)
	{
		(*stack)-> node = new_end_node;
		return ;
	}
	old_last_node = last_node(*stack);
	old_last_node->next = new_end_node;
	//new_end_node->index = (*stack)->size; index handled in node
}
