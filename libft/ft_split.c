/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 11:18:57 by rrajaobe          #+#    #+#             */
/*   Updated: 2021/09/24 13:37:55 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
