/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation_swap_and_push.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 05:44:52 by coder             #+#    #+#             */
/*   Updated: 2021/12/10 07:26:43 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
/*
Swap first two elements on stacks´s top. Nothing if one or less elements.
sa
sb
ss

 
pa:     First el of b -> first el of a.
pb


*/
int	sa_sb(t_stack *stack, char c)
{
	int	temp;
	
	if (stack->size <= 1)
		return FALSE;
	if (c == 'a')
		printf("sa\n");
	else if (c == 'b')
		printf("sb\n");
	temp = (stack->node->data);
	stack->node->data = stack->node->next->data;
	stack->node->next->data = temp;
	return TRUE;
}

void	ss(t_stack *stack_a, t_stack *stack_b, char c)
{
	int	print;

	print = sa_sb(stack_a, 'X');
	if (sa_sb(stack_b, 'X') && print)
		printf("ss\n");
}

void pa_pb(t_stack **stack_a, t_stack **stack_b, char c)
{
	if (c == 'a' && stack_b)
	{
		printf("pa\n");
		stack_add_front(a, (*stack_b)->node);
		stack_a->size ++;
		stack_b->size --;
	}
	else if (c == 'b' && stack_a)
	{
		printf("pb\n");
		stack_add_front(b, (*stack_a)->node);
		stack_b->size ++;
		stack_a->size --;
	}
}