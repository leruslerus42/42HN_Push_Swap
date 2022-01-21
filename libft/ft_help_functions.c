/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_help_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:02:46 by coder             #+#    #+#             */
/*   Updated: 2022/01/20 10:42:46 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
