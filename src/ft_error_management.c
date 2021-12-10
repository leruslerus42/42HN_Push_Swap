/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_management.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 05:07:57 by coder             #+#    #+#             */
/*   Updated: 2021/12/10 05:41:04 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void ft_error_double_digit(t_stack *stack, int num)
{
	t_node  *temp;
	
	temp = stack->node;
	while (temp)
	{
		if (num == temp->data)
		{
			printf("%s Double Digit\n", ERROR);
			exit(0);
		}
		temp = temp->next;
	}
}


//ARGUMENTS NOT INTEGERS OR BIGGER THEN INTEGER STILL TO MANAGE