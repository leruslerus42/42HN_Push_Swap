/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algoritmus_helper.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe < rrajaobe@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:44:38 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/01/22 23:03:07 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	find_maximum_first_time(t_stack *stack, int *p_max, int *p_index_max)
{
	t_node	*temp;
	int		max;
	int		max_index;

	temp = (stack)->node;
	max = temp->value;
	max_index = temp->index;
	while (temp->next)
	{
		if (max < temp->next->value)
		{
			max_index = temp->next->index;
			max = temp->next->value;
		}
		temp = temp->next;
	}
	(*p_max) = max;
	(*p_index_max) = max_index;
}

void	find_minimum_first_time(t_stack *stack, int *p_min, int *p_index_min)
{
	t_node	*temp;
	int		min;
	int		min_index;

	temp = (stack)->node;
	min = temp->value;
	min_index = temp->index;
	while (temp->next)
	{
		if (min > temp->next->value)
		{
			min_index = temp->next->index;
			min = temp->next->value;
		}
		temp = temp->next;
	}
	(*p_min) = min;
	(*p_index_min) = min_index;
}

void	find_maximum(t_stack *stack, int *p_max, int *p_index_max)
{
	t_node	*temp;
	int		max;
	int		max_index;

	temp = (stack)->node;
	max = temp->new_value;
	max_index = temp->index;
	while (temp->next)
	{
		if (max < temp->next->new_value)
		{
			max_index = temp->next->index;
			max = temp->next->new_value;
		}
		temp = temp->next;
	}
	(*p_max) = max;
	(*p_index_max) = max_index;
}

void	find_minimum(t_stack *stack, int *p_min, int *p_index_min)
{
	t_node	*temp;
	int		min;
	int		min_index;

	temp = (stack)->node;
	min = temp->new_value;
	min_index = temp->index;
	while (temp->next)
	{
		if (min > temp->next->new_value)
		{
			min_index = temp->next->index;
			min = temp->next->new_value;
		}
		temp = temp->next;
	}
	(*p_min) = min;
	(*p_index_min) = min_index;
}
