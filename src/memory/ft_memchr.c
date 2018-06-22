/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarate <rzarate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 11:51:28 by rzarate           #+#    #+#             */
/*   Updated: 2018/06/22 00:21:15 by rzarate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const uint8_t	*p;
	size_t			i;

	i = 0;
	p = (const uint8_t *)s;
	while (i < n)
	{
		if (p[i] == (uint8_t)c)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}
