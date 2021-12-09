/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:20:04 by rrajaobe          #+#    #+#             */
/*   Updated: 2021/09/24 13:33:18 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	i = 0;
	p1 = (unsigned char *) src;
	p2 = (unsigned char *) dst;
	if ((dst == NULL) && (p1 == 0))
		return (dst);
	else if (dst == NULL)
		p2[i++] = 'w';
	else if (p2 == 0)
		return (dst);
	while (i < n)
	{
		p2[i] = p1[i];
		i++;
	}
	return (dst);
}
