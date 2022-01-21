/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_help_functions2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:02:46 by coder             #+#    #+#             */
/*   Updated: 2022/01/20 10:43:02 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i ++;
	return (i);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (s == 0)
		return ;
	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
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
