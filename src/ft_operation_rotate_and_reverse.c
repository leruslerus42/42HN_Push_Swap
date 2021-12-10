/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation_rotate_and_reverse.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 07:25:48 by coder             #+#    #+#             */
/*   Updated: 2021/12/10 07:53:31 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
ra:     rotate. first el-> last el
rb
rr

rra:    last el-> first el
rrb
rrr
*/
//testa. unsicher ob richtig ist und das erste value gelöscht wird
void	ra_rb(t_stack *stack, int c)
{
	t_node *last;
	
	if (c == 'a')
		printf('rra\n');
	else if (c == 'b')
        printf('rrb\n');
	temp = stack->node->data;
	last = last_node(stack);
	
	//stack->node->data = last->node;
	last->next = temp;
	temp->next = NULL;

	/*IMPLEMENTA CHANGE OF INDEX*/
}

void	rr(t_stack *stack_a, t_stack *stack_b, char c)
{
	ra_rb(stack_a, 'X');
	ra_rb(stack_b, 'X');
	printf("rr\n");
}

//IMPLEMENT
void	rra_rrb(t_stack *stack, int c)
{
	t_node *last;
	
	if (c == 'a')
		printf('ra\n');
	else if (c == 'b')
        printf('rb\n');
	temp = stack->node->data;
	last = last_node(stack);
	while (stack->node->next)
	{
		stack->node = stack->node->next;
		
	}

	/*IMPLEMENTA CHANGE OF INDEX*/
}

void	rrr(t_stack *stack_a, t_stack *stack_b, char c)
{
	int	print;

	rra_rrb(stack_a, 'X');
	rra_rrb(stack_b, 'X');
	printf("rrr\n");
}