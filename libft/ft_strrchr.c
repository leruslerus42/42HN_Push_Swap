/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:23:14 by rrajaobe          #+#    #+#             */
/*   Updated: 2021/09/24 14:26:54 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	len;
	char	*p;

	i = 0;
	p = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (s[i] == c)
		{
			p = &((char *)s)[i];
		}
		i++;
	}
	return (p);
}
