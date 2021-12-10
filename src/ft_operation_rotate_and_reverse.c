/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation_rotate_and_reverse.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 07:25:48 by coder             #+#    #+#             */
/*   Updated: 2021/12/10 12:16:46 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


//testa. unsicher ob richtig ist und das erste value gelöscht wird
//first el -> last el
void	ra_rb(t_stack *stack, int c)
{
	t_node *last;
	int		temp;
	t_node	*temp2;
	
	if (c == 'a')
		printf("ra\n");
	else if (c == 'b')
        printf("rb\n");
	temp = stack->node->data;
	last = last_node(stack);
	stack->node->data = last->data;
	last->next = stack->node->next;
	temp2 = last->next;
	//stack->node->data = last->node;
	while (temp2->next->next)
		temp2 = temp2->next;
	temp2->data = temp;
	temp2->next = NULL;

	//IMPLEMENTA CHANGE OF INDEX
}

void	rr(t_stack *stack_a, t_stack *stack_b, char c)
{
	ra_rb(stack_a, 'X');
	ra_rb(stack_b, 'X');
	printf("rr\n");
}

//IMPLEMENT


//last el->first el
void	rra_rrb(t_stack *stack, int c)
{
	t_node *last;
	t_node	*temp;
	
	if (c == 'a')
		printf("ra\n");
	else if (c == 'b')
        printf("rb\n");
	temp = stack->node;
	last = last_node(stack);
	stack->node->next->data = temp->data;
	stack->node->data = last->data;
	while (temp->next->next)
		temp = temp->next;
	temp->next = NULL;
	last->next = temp;
	//IMPLEMENTA CHANGE OF INDEX
}

void	rrr(t_stack *stack_a, t_stack *stack_b, char c)
{
	int	print;

	rra_rrb(stack_a, 'X');
	rra_rrb(stack_b, 'X');
	printf("rrr\n");
}