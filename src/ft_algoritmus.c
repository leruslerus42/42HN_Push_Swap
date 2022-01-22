/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algoritmus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe < rrajaobe@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:38:58 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/01/22 23:21:04 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	algorithmus_x_3(t_stack *a)
{
	int	min_index;

	find_minimum(a, &min_index -1, &min_index);
	if (a->size == 2)
	{
		swap(a, 'a', FALSE);
		return ;
	}
	if (min_index == 1)
	{
		swap(a, 'a', FALSE);
		rotate(a, 'a', FALSE);
	}
	if (min_index == 2 && ((a)->node->value < (a)->node->next->next->value))
		swap(a, 'a', FALSE);
	else if (min_index == 2
		&& ((a)->node->value > (a)->node->next->next->value))
		rotate(a, 'a', FALSE);
	if (min_index == 3 && ((a)->node->value < (a)->node->next->value))
		reverse(a, 'a', FALSE);
	else if (min_index == 3 && ((a)->node->value > (a)->node->next->value))
	{
		swap(a, 'a', FALSE);
		reverse(a, 'a', FALSE);
	}
}

static void	algorithmus_x_5_helper(t_stack *a, int index)
{
	if (index < 3)
		rotate(a, 'a', FALSE);
	else
		reverse(a, 'a', FALSE);
}

void	algorithmus_x_5(t_stack *a, t_stack *b)
{
	int	index_min;
	int	min;
	int	index_max;
	int	max;

	if (a == NULL || a->node == NULL)
		return ;
	find_minimum_first_time(a, &min, &index_min);
	while ((a)->node->value != min)
		algorithmus_x_5_helper(a, index_min);
	push(&a, &b, 'b', FALSE);
	find_maximum_first_time(a, &max, &index_max);
	while ((a)->node->value != max)
		algorithmus_x_5_helper(a, index_max);
	push(&a, &b, 'b', FALSE);
	if (!ft_stack_sorted(a))
		algorithmus_x_3(a);
	push(&a, &b, 'a', FALSE);
	rotate(a, 'a', FALSE);
	push(&a, &b, 'a', FALSE);
}

static int	bits_counter(int size)
{
	unsigned int	i;

	i = 0;
	while (size)
	{
		size /= 2;
		i++;
	}
	return (i);
}

/*
Bitshifting: every bit will be evaluated, the next bit of new_value 
can be 0 or 1, and based on that the stack will be pushed or rotated.
*/
void	universal_algorithmus(t_stack *a, t_stack *b)
{
	unsigned int	bits;
	unsigned int	i;
	int				size;

	size = a->size;
	bits = bits_counter(size);
	i = 0;
	while (i < bits)
	{
		while (size --)
		{
			if (a->node->new_value & (1 << i))
				rotate(a, 'a', FALSE);
			else
				push(&a, &b, 'b', FALSE);
		}
		if (ft_stack_sorted(a) == TRUE && !(b->size))
			return ;
		while (b->size)
			push(&a, &b, 'a', FALSE);
		size = a->size;
		i++;
	}
}
