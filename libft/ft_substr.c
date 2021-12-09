/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 13:59:21 by rrajaobe          #+#    #+#             */
/*   Updated: 2021/09/24 13:50:06 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
