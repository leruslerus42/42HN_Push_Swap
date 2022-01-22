/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe < rrajaobe@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:29:10 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/01/22 23:50:18 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

/*
First of all I create two stack, a and b.
Then I will parse the arguments at the top of the stack a.
After doing that I check if the stack is already sorted:
if yes, we already got our desired output;
otherwise I will create an index, and give to every argument
a value starting from 1 to n, increasing by one every time I
have a new argument. 
After doing that I can choose the right Algorithmus, that I want
to use.
*/

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc < 2)
		return (0);
	a = new_stack();
	parsing(&a, argv, argc);
	if (ft_stack_sorted(a) == TRUE && !BONUS)
		ft_exit(0);
	b = new_stack();
	stack_first_reindexing(a);
	if (BONUS == 1)
		checker(a, b);
	else if (a->size == 2 || a->size == 3)
		algorithmus_x_3(a);
	else if (a->size == 4 || a->size == 5)
		algorithmus_x_5(a, b);
	else
		universal_algorithmus(a, b);
	ft_free(a);
	ft_free(b);
	ft_exit(0);
	return (0);
}

/*
FOR TESTING PURPOSES
https://commentpicker.com/random-number-generator.php
ARG="<100 random values>"; ./push_swap $ARG | ./checker $ARG
ARG="<100 random values>"; ./push_swap $ARG | wc -l
*/
