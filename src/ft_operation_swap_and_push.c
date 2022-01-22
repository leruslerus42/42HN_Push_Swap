/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation_swap_and_push.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe < rrajaobe@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 05:44:52 by coder             #+#    #+#             */
/*   Updated: 2022/01/22 23:46:08 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*first a-b <--> second a-b*/
void	swap(t_stack *stack, char c, int checker)
{
	t_node	*temp;
	int		first_value;

	temp = NULL;
	if (c == 'a' && !checker)
		ft_putstr_fd("sa\n", 1);
	else if (c == 'b' && !checker)
		ft_putstr_fd("sb\n", 1);
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
	stack->ops ++;
}

void	swap_x_2(t_stack *stack_a, t_stack *stack_b, int checker)
{
	if (stack_a->size <= 1 || stack_b->size <= 1)
		return ;
	swap(stack_a, 'X', checker);
	swap(stack_b, 'X', checker);
	if (!checker)
		ft_putstr_fd("ss\n", 1);
	stack_a->ops --;
}

/*	pa: first b->first a
	pb: first a->first b
*/
void	push(t_stack **a, t_stack **b, char c, int checker)
{
	t_node	*temp;

	temp = NULL;
	if (c == 'a' && (*b)->size > 0)
	{
		if (!checker)
			ft_putstr_fd("pa\n", 1);
		temp = (*b)->node;
		(*b)->node = (*b)->node->next;
		temp->next = (*a)->node;
		(*a)->node = temp;
		(*a)->size ++;
		(*b)->size --;
		if ((*b)->size == 0)
			(*b)->node = NULL;
		index_reording(*a);
		index_reording(*b);
	}
	else if (c == 'b' && ((*a)->size > 0))
		push_2(a, b, checker);
	(*a)->ops ++;
}

void	push_2(t_stack **a, t_stack **b, int checker)
{
	t_node	*temp;

	temp = NULL;
	if (!checker)
		ft_putstr_fd("pb\n", 1);
	if (((*b)->node) == NULL)
	{	
		(*b)->node = new_node
			(*b, (*a)->node->value, (*a)->node->new_value, 'b');
		(*b)->size --;
		(*a)->node = (*a)->node->next;
	}
	else
	{
		temp = (*a)->node;
		(*a)->node = (*a)->node->next;
		temp->next = (*b)->node;
		(*b)->node = temp;
	}
	(*b)->size ++;
	(*a)->size --;
	index_reording(*a);
	index_reording(*b);
}
