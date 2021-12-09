/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:59:54 by rrajaobe          #+#    #+#             */
/*   Updated: 2021/09/24 13:39:27 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*tab;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	tab = malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (0);
	while (i < len)
	{
		tab [i] = s1[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
