/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation_swap_and_push.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 05:44:52 by coder             #+#    #+#             */
/*   Updated: 2021/12/10 11:39:35 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	int	print;

	if (stack_a->size <= 1 || stack_b->size <= 1)
		return ;
	print = sa_sb(stack_a, 'X');
	if (sa_sb(stack_b, 'X') && print)
		printf("ss\n");
}

/*	pa: first b->first a
	pb: first a->first b
*/
void pa_pb(t_stack **a, t_stack **b, char c)
{
	if (c == 'a' && (*b))
	{
		printf("pa\n");
		stack_add_front(a, (*b)->node);
		(*a)->size ++;
		(*b)->size --;
		//1) remember to destroy node!
		//2) size of b is -1 althought should be 0
	}
	else if (c == 'b' && (*a))
	{
		printf("pb\n");
		stack_add_front(b, (*a)->node);
		(*b)->size ++;
		(*a)->size --;
	}

	
}