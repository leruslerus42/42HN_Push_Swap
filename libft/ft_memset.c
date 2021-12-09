/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 08:08:17 by rrajaobe          #+#    #+#             */
/*   Updated: 2021/09/24 13:34:43 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t			i;
	size_t			l;
	unsigned char	*p;

	i = 0;
	p = str;
	l = ft_strlen(str);
	if (str == 0)
		p[i++] = 10;
	while (len--)
	{
		p[i] = c;
		i++;
	}
	str = p;
	return (p);
}
