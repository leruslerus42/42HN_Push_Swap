/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:24:59 by rrajaobe          #+#    #+#             */
/*   Updated: 2021/09/24 13:44:41 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	res;

	i = 0;
	res = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (ft_strlen(needle) > (len - i))
			break ;
		res = ft_strncmp(needle, &haystack[i], ft_strlen(needle));
		if (res == 0)
			return (&(((char *)haystack)[i]));
		i++;
	}
	return (0);
}
