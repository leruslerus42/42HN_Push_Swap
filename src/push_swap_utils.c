/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:38:58 by coder             #+#    #+#             */
/*   Updated: 2021/12/08 12:47:11 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	**new_stack(void)
{
	t_stack	*stack;

	stack = malloc(sizeof(*t_stack));
	if (!stack)
		return (0);
	stack->size = 0;
	return (stack);
}

t_node	*new_node(int data)
{
	t_node		*node;
	static int	i = 0;

	node = malloc(sizeof(*t_node));
	if (!node)
		return (0);
	i++;
	node->data = data;
	node->index = i;
	return (node);
}

t_node	*last_node(t_stack **stack)
{
	t_node	*last_node;

	last_node = (*stack)->node;
	while ((*stack)->node->next)
	{
		last_node = (*stack)->node->next;
		stack++;
	}
	return (last_node);
}

void	stack_add_front(t_stack **stack, t_node *new_start_node)
{
	if (!stack)
		return ;
	(*stack)->node = last_node(stack);
	(*stack)->node->next = new_node(0);
	while ((*stack)->node->index)
	{
		(*stack)->node->next = (*stack)->node;
		stack--;
		if ((*stack)->node->index == 1)
			(*stack)->node = new_start_node;
	}
}

void	stack_add_back(t_stack **stack, t_node *new_end_node)
{
	if (!stack || !node)
		return ;
	(*stack)->node = last_node(stack);
	(*stack)->node->next = new_end_node;
}
