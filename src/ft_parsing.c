/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:02:46 by coder             #+#    #+#             */
/*   Updated: 2022/01/21 05:46:29 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <limits.h>

static int	ft_legit_number(const char *input)
{
	int				sign;
	long long int	num;

	sign = 1;
	num = 0;
	while ((*input >= 9 && *input <= 13) || *input == ' ')
		input++;
	if (*input == '-' || *input == '+')
	{
		if (*input == '-')
			sign *= -1;
		input++;
		if (*input == '\0')
			ft_exit(2);
	}
	while (ft_isdigit(*input))
		num = num * 10 + *input++ - '0';
	if (sign * num < INT_MIN || sign * num > INT_MAX || *input != '\0')
		ft_exit(2);
	return (sign * num);
}

void	parsing(t_stack **a, char **argv, int argc)
{
	int				i;
	int				j;
	char			**array;
	long long		num;	

	i = 1;
	array = NULL;
	if (*argv[1] == '\0')
		ft_exit(0);
	while (i < argc)
	{
		array = ft_split(argv[i], ' ');
		j = 0;
		while (array[j])
		{
			num = ft_legit_number(array[j]);
			ft_error_double_digit(*a, num);
			stack_add_back(a, new_node(*a, num, 0, 'a'));
			j++;
		}
		i++;
		while (j--)
			free(array[j]);
	}
}
