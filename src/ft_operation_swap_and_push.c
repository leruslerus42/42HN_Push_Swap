/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation_swap_and_push.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 05:44:52 by coder             #+#    #+#             */
/*   Updated: 2021/12/10 20:53:30 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	swap(t_stack *stack, char c)
{
	t_node	*temp;
	int		first_value;
	
	if (stack->size <= 1)
		return FALSE;
	temp = NULL;
	if (c == 'a')
		printf("sa\n");
	else if (c == 'b')
		printf("sb\n");
	temp = stack->node;
	while (temp)
	{
		if (temp->index == 1)
		{
			first_value = temp->value;
			temp->value = temp->next->value;
		}
		else if (temp->index == 2)
		{
			temp->value = first_value;
			break ;
		}
		temp = temp->next;
	}
	free(temp);
	temp = NULL;
	return TRUE;
}

void	swap_x_2(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->size <= 1 || stack_b->size <= 1)
		return ;
	swap(stack_a, 'X');
	swap(stack_b, 'X');
	printf("ss\n");
}













/*	pa: first b->first a
	pb: first a->first b
*/
void push(t_stack **a, t_stack **b, char c)
{
	t_node	*temp;
	t_node	*copy_first_node;

	temp = NULL;
	copy_first_node = NULL;
	if (c == 'a' && (*b))
	{
		printf("pa\n");
		copy_first_node = node_copy((*b)->node);
		stack_add_front(a, copy_first_node, 'a');
		temp = copy_first_node ;
		while (temp->index != (*b)->size)
		{
			temp->value = temp->next->value;
			temp = temp->next;
			//printf("	%i %i\n", (temp)->value, (temp)->index); 
		}
		free(temp);
		temp = NULL;
		(*b)->size --;
		//1) remember to destroy node!
		//2) size of b is -1 althought should be 0
	}
	else if (c == 'b' && (*a))
	{
		printf("pb\n");
		copy_first_node = node_copy((*a)->node);
		stack_add_front(b, copy_first_node, 'b');
		temp = (*a)->node;
		while (temp->index != (*a)->size)
		{
			temp->value = temp->next->value;
			temp = temp->next;
			//printf("	%i %i\n", (temp)->value, (temp)->index); 
		}
		free(temp);
		temp = NULL;
		(*a)->size --;
	}

	
}