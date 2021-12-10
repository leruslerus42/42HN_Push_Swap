/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 05:44:52 by coder             #+#    #+#             */
/*   Updated: 2021/12/10 05:54:10 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
/*
Swap first two elements on stacks´s top. Nothing if one or less elements.
sa
sb
ss

 
pa:     First el of b -> first el of a.
pb

ra:     rotate. first el-> last el
rb
rr

rra:    last el-> first el
rrb
rrr
*/
void	sa(t_stack *a)
{
	t_node	*temp;
	
	if (a->size <= 1)
		return ;
	temp = (*stack)->node;
	
	
	
}