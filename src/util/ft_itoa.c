/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarate <rzarate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 15:13:58 by rzarate           #+#    #+#             */
/*   Updated: 2018/06/22 01:14:01 by rzarate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	chars_in_num(intmax_t n)
{
	size_t	r;

	r = 0;
	if (!n == 0)
		return (1);
	else if (n < 0)
	{
		r++;
		n *= -1;
	}
	while (n > 0)
	{
		r++;
		n /= 10;
	}
	return (r);
}

char	*ft_itoa(intmax_t n)
{
	char	*s;
	uint8_t	i;
	size_t	len;

	i = 0;
	len = chars_in_num(n);
	s = ft_strnew(len);
	if (!s)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		i++;
		s[0] = '-';
	}
	while (--len >= i)
	{
		s[len] = (n % 10) + '0';
		n /= 10;
	}
	return (s);
}
