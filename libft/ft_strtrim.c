/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 17:25:18 by rrajaobe          #+#    #+#             */
/*   Updated: 2021/09/24 14:30:23 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		head;
	int		end;
	char	*p;

	if (!s1 || !set)
		return (0);
	head = 0;
	while (ft_strchr(set, s1[head]) && s1[head])
		head++;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	if (end + 1 < head)
	{
		p = ft_strdup("\0");
		return (p);
	}
	p = ft_substr(s1, head, end - head + 1);
	return (p);
}
