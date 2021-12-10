/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:02:46 by coder             #+#    #+#             */
/*   Updated: 2021/12/10 05:39:52 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
void	parsing(t_stack **a, char **argv, int argc)
{
	int i;
	int		j;
	char	**array;
	int		num;	


	i = 1;
	array = NULL;
	while (i < argc)
	{
		array = ft_split(argv[i], ' ');
		j = 0;
		while (array[j])
		{
			num = ft_atoi(array[j]);
			ft_error_double_digit(*a, num);
			(*a)->size ++;
			stack_add_back(a, new_node(num));
			j++;
		}
		i++;
		while (j--)
			free(array[j]);
	}
	//a->size = i;

	//printf("%i\n", get_stack_size(*a));


}


	//TEST PUSH UTILS
	/*(*a)->node = new_node(100);
	(*a)->node->next = new_node(200);
	(*a)->node->next->next = new_node(300);
	stack_add_front(a, new_node(50));
	stack_add_back(a, new_node(400));
	(*a)->node->next->next->next = new_node(500);*/
	
	/* TEST PUSH UTILS MAIN
	while (i < 7)
	{
		printf("%i %i\n", a->node->data, a->node->index);
		(a)->node = (a)->node->next;
		i++;
	}*/
	//printf("%i ", last_node(a)->data);
	//printf("%i\n", get_stack_size(a));