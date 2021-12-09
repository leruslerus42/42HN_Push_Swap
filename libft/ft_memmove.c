/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:30:56 by rrajaobe          #+#    #+#             */
/*   Updated: 2021/09/24 13:34:15 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*p1;
	char	*p2;

	i = 0;
	p1 = (char *) src;
	p2 = (char *) dst;
	if ((!dst) && (!src))
		return (dst);
	while ((len--))
	{
		if (src > dst)
		{
			p2[i] = p1[i];
			i++;
		}
		else
		{
			p2[i + len] = p1[i + len];
		}
	}
	return (dst);
}
