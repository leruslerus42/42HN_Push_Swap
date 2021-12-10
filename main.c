/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:29:10 by coder             #+#    #+#             */
/*   Updated: 2021/12/10 12:39:22 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"
#include <string.h>
int main(int argc, char **argv)
{
	t_stack *a;
	t_stack *b;

	if (argc < 2)
		return (0);
	a = new_stack();
	parsing(&a, argv, argc);
	b = new_stack();
	stack_add_back(&b, new_node(9));
	stack_add_back(&b, new_node(7));

	
	/*while ((a)->node->next)
	{
		printf("%i %i\n", a->node->data, a->node->index);
		(a)->node = (a)->node->next;
		i++;
	}*/
	//printf("%i ", last_node(a)->data);
	//printf("%i %i\n", a->node->data, a->node->index);

	sa_sb(a,'a');
	sa_sb(a,'a');
	sa_sb(a,'a');
	sa_sb(a,'a');
	//TESTING
	int i = 0;
	while ((a)->node->next)
	{
		printf("%i %i", (a)->node->data,  (a)->node->index);
		printf("	%i %i\n", (b)->node->data, (b)->node->index); 
		(a)->node =  (a)->node->next;
		i++;
	}
	printf("%i %i", (a)->node->data,  (a)->node->index);
	printf("	%i %i\n", (b)->node->data, (b)->node->index); 
	
	printf("___	___\n");
	printf("pa	pb\n");

	printf("%i	%i\n", (a)->size, (b)->size);
	





}

