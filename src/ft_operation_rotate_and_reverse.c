/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation_rotate_and_reverse.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 07:25:48 by coder             #+#    #+#             */
/*   Updated: 2022/01/20 06:37:39 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*first el -> last el*/
void	rotate(t_stack *stack, int c, int checker)
{
	t_node	*last;
	t_node	*temp;
	t_node	*temp2;

	if (stack->size <= 1)
		return ;
	if (c == 'a' && !checker)
		ft_putstr_fd("ra\n", 1);
	else if (c == 'b' && !checker)
		ft_putstr_fd("rb\n", 1);
	temp = stack->node;
	temp2 = stack->node->next;
	stack->node = temp2;
	last = last_node(stack);
	last->next = temp;
	temp->next = NULL;
	index_reording(stack);
	stack->ops ++;
}

void	rotate_x_2(t_stack *stack_a, t_stack *stack_b, int checker)
{
	if (stack_a->size <= 1 || stack_b->size <= 1)
		return ;
	rotate(stack_a, 'X', checker);
	rotate(stack_b, 'X', checker);
	if (!checker)
		ft_putstr_fd("rr\n", 1);
	stack_a->ops --;
}

/*last el->first el*/
void	reverse(t_stack *stack, int c, int checker)
{
	t_node	*last;
	t_node	*temp;
	t_node	*temp2;

	if (stack->size <= 1)
		return ;
	if (c == 'a' && !checker)
		ft_putstr_fd("rra\n", 1);
	else if (c == 'b' && !checker)
		ft_putstr_fd("rrb\n", 1);
	temp = stack->node;
	last = last_node(stack);
	stack->node = last;
	temp2 = temp;
	while (temp2->next->next)
		temp2 = temp2->next;
	last->next = temp;
	temp2->next = NULL;
	index_reording(stack);
	stack->ops ++;
}

void	reverse_x_2(t_stack *stack_a, t_stack *stack_b, int checker)
{
	if (stack_a->size <= 1 || stack_b->size <= 1)
		return ;
	reverse(stack_a, 'X', checker);
	reverse(stack_b, 'X', checker);
	if (!checker)
		ft_putstr_fd("rrr\n", 1);
	stack_a->ops --;
}
