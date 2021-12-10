/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:02:46 by coder             #+#    #+#             */
/*   Updated: 2021/12/10 19:10:01 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
/*
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i ++;
	return (i);
}


int	ft_isdigit(int c)
{
	if ((c >= '\060') && (c <= '\071'))
		return (1);
	return (0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*tab;
	size_t			i;
	unsigned int	len_orig;

	i = 0;
	len_orig = ft_strlen(s);
	if (len_orig <= start)
	{
		tab = malloc(1);
		tab[0] = '\0';
		return (tab);
	}
	else if (len_orig < start + len)
		len = len_orig - start;
	tab = malloc(len + 1);
	if (!tab)
		return (0);
	while ((i < len) && s[start])
	{
		tab[i] = s[start];
		start++;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}


int	ft_atoi(const char *str)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if (*str == 45 || *str == 43)
		if (*str++ == 45)
			sign *= -1;
	while (ft_isdigit(*str) && *str)
		res = res * 10 + *str++ - '0';
	return (res * sign);
}

static	char	**ft_magic(char const *s, char c, char **str)
{
	unsigned int	k;
	unsigned int	j;
	unsigned int	i;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = i;
			while (s[i] != c && s[i])
				i++;
			str[k] = ft_substr(s, j, i - j);
			k++;
		}
		else
			i++;
	}
	return (str);
}

static	int	ft_count_words(const char *s, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i])
				i++;
		}
		else if (s[i])
			i++;
	}
	return (words);
}



char	**ft_split(char const *s, char c)
{
	char	**str;
	int		words;

	if (!s)
		return (0);
	words = ft_count_words(s, c);
	str = malloc((words + 1) * sizeof(char *));
	if (!str)
		return (0);
	str[words] = NULL;
	str = (ft_magic(s, c, str));
	return (str);
}
*/

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
			stack_add_back(a, new_node(*a, num, 'a'));
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
		printf("%i %i\n", a->node->value, a->node->index);
		(a)->node = (a)->node->next;
		i++;
	}*/
	//printf("%i ", last_node(a)->value);
	//printf("%i\n", get_stack_size(a));