/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_utils2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:49:05 by coder             #+#    #+#             */
/*   Updated: 2021/12/10 20:50:32 by coder            ###   ########.fr       */
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

t_node	*node_copy(t_node *original)
{
	t_node	*copy;

	copy = NULL;
	if (!original)
		return (NULL);
	copy = malloc(sizeof(t_node));
	if (!copy)
		return (NULL);
	copy->value = original->value;
	return (copy);
}