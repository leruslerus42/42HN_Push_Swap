/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_management.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 05:07:57 by coder             #+#    #+#             */
/*   Updated: 2022/01/21 04:51:29 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_error_double_digit(t_stack *stack, int num)
{
	t_node	*temp;

	if (!(stack->size))
		return ;
	temp = stack->node;
	while (temp)
	{
		if (num == temp->value)
		{
			ft_free(stack);
			ft_exit(2);
		}
		temp = temp->next;
	}
}

void	ft_free(t_stack *stack)
{
	t_node *temp;

	temp = NULL;
	while (stack->node)
	{
		temp = stack->node->next;
		free(stack->node);
		stack->node = temp;
	}
}

void	ft_exit(int case_num)
{
	if (case_num == 1)
		ft_putstr_fd("ERROR\n Double Digit\n", 2);
	else if(case_num == 2)
		ft_putstr_fd("ERROR,\n input is not a valid integer\n", 2);
	else if (case_num == 3)
		ft_putstr_fd("\nError,\n Invalid checker's instruction!\n", 2);
	else if (case_num == 42)
		ft_putstr_fd("\nOK\n", 1);
	exit(0);
}

/* Helpful functions to visualizes the values of the stack

void	print_stack_with_new_values(t_stack *a, t_stack *b)
{
	printf("___	___\n");
	printf("N i	N i\n");
	while ((a)->node)
	{
		printf("%i %i\n", (a)->node->new_value, (a)->node->index);
		(a)->node = (a)->node->next;
	}
	while ((b)->node)
	{
		printf("	%i %i\n", (b)->node->new_value, (b)->node->index);
		(b)->node = (b)->node->next;
	}
	printf("___	___\n");
	printf("a	b	stack\n");
	printf("%i	%i	size\n\n", (a)->size, (b)->size);
	printf("OPS: %i\n\n0,", ((a)->ops + (b)->ops));
}

void	print_stack(t_stack *a, t_stack *b, char c)
{
	if (c == 'n')
	{
		print_stack_with_new_values(a, b);
		return ;
	}
	printf("___	___\n");
	printf("v i	v i\n");
	while ((a)->node)
	{
		printf("%i %i\n", (a)->node->value, (a)->node->index);
		(a)->node = (a)->node->next;
	}
	while ((b)->node)
	{
		printf("	%i %i\n", (b)->node->value, (b)->node->index);
		(b)->node = (b)->node->next;
	}
	printf("___	___\n");
	printf("a	b	stack\n");
	printf("%i	%i	size\n\n", (a)->size, (b)->size);
	printf("OPS: %i\n\n0,", ((a)->ops + (b)->ops));
}
*/