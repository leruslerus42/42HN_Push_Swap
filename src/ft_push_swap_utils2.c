/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:49:05 by coder             #+#    #+#             */
/*   Updated: 2021/12/10 03:46:09 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_stack_size(t_stack *stack)
{
	t_node *last;

	last = last_node(stack);
	return(last->index);
}

void	index_reording(t_stack *stack)
{
	t_node	*first_node;
	int	i;

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