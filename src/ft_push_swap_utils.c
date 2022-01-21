/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:38:58 by coder             #+#    #+#             */
/*   Updated: 2022/01/21 05:56:00 by rrajaobe         ###   ########.fr       */
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
	stack->ops = 0;
	return (stack);
}

t_node	*new_node(t_stack *stack, int value, int new_value, char c)
{
	t_node		*node;
	static int	i = 0;
	static int	j = 0;

	node = malloc(sizeof(*node));
	if (!node)
		return (0);
	node->value = value;
	node->next = NULL;
	node->flag = FALSE;
	node->new_value = new_value;
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
	return (node);
}

t_node	*last_node(t_stack *stack)
{
	t_node	*first_node;

	if (!(stack)->node)
		return (NULL);
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
	old_first_node = new_node(*stack, (*stack)->node->value, 0, c);
	old_first_node->next = (*stack)->node->next;
	(*stack)->node = new_start_node;
	new_start_node->next = old_first_node;
	index_reording(*stack);
}

void	stack_add_back(t_stack **stack, t_node *new_end_node)
{
	if ((*stack)->node == NULL)
	{
		(*stack)-> node = new_end_node;
		return ;
	}
	last_node(*stack)->next = new_end_node;
}
