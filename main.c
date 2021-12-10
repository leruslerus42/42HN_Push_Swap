/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:29:10 by coder             #+#    #+#             */
/*   Updated: 2021/12/10 20:52:59 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"
#include <string.h>
int main(int argc, char **argv)
{
	t_stack *a;
	t_stack *b;
	int i = 0;

	if (argc < 2)
		return (0);
	a = new_stack();
	parsing(&a, argv, argc);
	b = new_stack();
	stack_add_back(&b, new_node(b,2,'b'));
	stack_add_back(&b, new_node(b, 4, 'b'));
	stack_add_back(&b, new_node(b, 6, 'b'));


	
	//TESTING
	
/*	while ((a)->node->next)
	{
		printf("%i %i", (a)->node->value,  (a)->node->index);
		printf("	%i %i\n", (b)->node->value, (b)->node->index); 
		(a)->node =  (a)->node->next;
		(b)->node =  (b)->node->next;
		i++;
	}
	printf("%i %i", (a)->node->value,  (a)->node->index);
	printf("	%i %i\n", (b)->node->value, (b)->node->index); 
	
	printf("___	___\n");
	printf("pa	pb\n");

	printf("%i	%i\n", (a)->size, (b)->size);
*/


	//swap_x_2(a,b);
	//swap(b,'b');
	push(&a, &b, 'a');


	//TESTING
	
	printf("___	___\n");
	printf("v i	v i\n");
	while ((a)->node->next)
	{
		printf("%i %i", (a)->node->value,  (a)->node->index);
		printf("	%i %i\n", (b)->node->value, (b)->node->index); 
		(a)->node =  (a)->node->next;
		(b)->node =  (b)->node->next;
		i++;
	}
	printf("%i %i", (a)->node->value,  (a)->node->index);
	printf("	%i %i\n", (b)->node->value, (b)->node->index); 
	
	printf("___	___\n");
	printf("a	b	stack\n");

	printf("%i	%i	size\n", (a)->size, (b)->size);





}

