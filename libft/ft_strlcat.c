/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:11:20 by rrajaobe          #+#    #+#             */
/*   Updated: 2021/09/24 13:42:16 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(src);
	len2 = ft_strlen(dst);
	if (dstsize <= len2)
		return (len1 + dstsize);
	if (dstsize)
	{
		while (dstsize && *dst)
		{
			dst++;
			dstsize--;
		}
		if (dstsize)
		{
			while (--dstsize && *src)
			{
				*dst++ = *src++;
			}
			*dst = '\0';
		}
	}
	return (len1 + len2);
}
