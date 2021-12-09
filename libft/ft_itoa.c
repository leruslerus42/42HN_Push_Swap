/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 08:59:59 by rrajaobe          #+#    #+#             */
/*   Updated: 2021/09/24 13:32:49 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	integer_len(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*tab;
	int		len;

	if (n == -2147483648)
		return (ft_strdup ("-2147483648"));
	len = integer_len(n);
	tab = (char *)malloc(len + 1);
	if (!tab)
		return (0);
	tab[len] = '\0';
	if (n < 0)
	{
		tab[0] = '-';
		n *= -1;
	}
	if (n == 0)
		tab[0] = '0';
	while (n)
	{
		tab[--len] = n % 10 + '0';
		n /= 10;
	}
	return ((tab));
}
