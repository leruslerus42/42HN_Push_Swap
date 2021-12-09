/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 09:39:34 by rrajaobe          #+#    #+#             */
/*   Updated: 2021/09/24 13:32:23 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = s;
	if (n == 0)
		return ;
	if (s == NULL)
		p[++i] = 'w';
	while ((s) && (i < n))
	{
		p[i] = (unsigned char) '\000';
		i++;
	}
}
