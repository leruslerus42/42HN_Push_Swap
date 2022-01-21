/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_utils2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:49:05 by coder             #+#    #+#             */
/*   Updated: 2022/01/19 11:47:39 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_stack_size(t_stack *stack)
{
	t_node	*last;

	last = last_node(stack);
	return (last->index);
}

void	index_reording(t_stack *stack)
{
	t_node	*first_node;
	int		i;

	if (stack->node == NULL)
		return ;
	i = 1;
	first_node = (stack)->node;
	while (first_node->next)
	{
		first_node->index = i;
		first_node = first_node->next;
		i++;
	}
	first_node->index = i;
}

int	ft_stack_sorted(t_stack *a)
{
	t_node	*temp;

	temp = a->node;
	while (temp->next)
	{
		if (temp->value > temp->next->value)
			return (FALSE);
		temp = temp->next;
	}
	temp = NULL;
	return (TRUE);
}

void	stack_first_reindexing_p2(t_stack *stack, t_node *temp, int min, int i)
{
	while (stack->node)
	{
		if (stack->node->flag == FALSE)
		{
			if (min >= stack->node->value)
				min = stack->node->value;
		}
		stack->node = stack->node->next;
	}
	stack->node = temp;
	while (stack->node)
	{
		if (min == stack->node->value)
		{
			stack->node->new_value = i;
			stack->node->flag = TRUE;
			break ;
		}
		stack->node = stack->node->next;
	}
}

void	stack_first_reindexing(t_stack *stack)
{
	t_node	*temp;
	int		i;
	int		min;
	int		max;

	temp = stack->node;
	max = 0;
	find_maximum_first_time(stack, &max, &i);
	i = 1;
	while (i <= stack->size)
	{
		min = max;
		stack->node = temp;
		stack_first_reindexing_p2(stack, temp, min, i);
		i++;
	}
	stack->node = temp;
}
