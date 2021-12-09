/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:18:21 by rrajaobe          #+#    #+#             */
/*   Updated: 2021/09/24 14:26:33 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	unsigned int	len;
	char			*p;

	i = 0;
	p = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (s[i] == c)
		{
			p = & ((char *)s)[i];
			return (p);
		}
		i++;
	}
	return (p);
}
