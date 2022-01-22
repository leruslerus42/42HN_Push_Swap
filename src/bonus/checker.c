/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe < rrajaobe@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:29:10 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/01/22 23:18:34 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
CHECKER BONUS PROGRAMM
Help us to check and test our programm.
*/

static void	error_management(t_stack *a, t_stack *b, char **tab, int i)
{
	if (tab[i][0] == 'r' && tab[i][1] == 'a')
		rotate(a, 'a', TRUE);
	else if (tab[i][0] == 'r' && tab[i][1] == 'b')
		rotate(b, 'b', TRUE);
	else if (tab[i][0] == 'r' && tab[i][1] == 'r')
		rotate_x_2(a, b, TRUE);
	else if (tab[i][0] == 'r' && tab[i][1] == 'r' && tab[i][2] == 'a')
		reverse(a, 'a', TRUE);
	else if (tab[i][0] == 'r' && tab[i][1] == 'r' && tab[i][2] == 'b')
		reverse(b, 'b', TRUE);
	else if (tab[i][0] == 'r' && tab[i][1] == 'r' && tab[i][2] == 'r')
		reverse_x_2(a, b, TRUE);
	else
	{	
		ft_free(a);
		if (b->size)
			ft_free(b);
		ft_exit(3);
	}
}

static void	operations_execution(t_stack *a, t_stack *b, char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (tab[i][2] == ' ')
			error_management(a, b, tab, i);
		if (tab[i][0] == 'p' && tab[i][1] == 'a')
			push(&a, &b, 'a', TRUE);
		else if (tab[i][0] == 'p' && tab[i][1] == 'b')
			push(&a, &b, 'b', TRUE);
		else if (tab[i][0] == 's' && tab[i][1] == 'a')
			swap(a, 'a', TRUE);
		else if (tab[i][0] == 's' && tab[i][1] == 'b')
			swap(b, 'b', TRUE);
		else if (tab[i][0] == 's' && tab[i][1] == 's')
			swap_x_2(a, b, TRUE);
		else
			error_management(a, b, tab, i);
		i++;
	}
}

/*scan %s until end of file/r: return the cursor to the begin of the line,
[] non empty sequence of chars 
	CTRL+D: indicates EoF, tapped two times if we are not at the begin of
	the cursor.
*/

void	checker(t_stack *a, t_stack *b)
{
	char	buf[1000];
	char	**tab;

	scanf("%[^\r]s", buf);
	if (ft_stack_sorted(a) == TRUE)
	{
		ft_free(a);
		ft_exit(0);
	}
	tab = ft_split(buf, '\n');
	operations_execution(a, b, tab);
	if (ft_stack_sorted(a))
		ft_putstr_fd("\nOK\n", 1);
	else
		ft_putstr_fd("\nKO\n", 1);
}
