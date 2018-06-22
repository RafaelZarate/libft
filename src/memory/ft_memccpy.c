/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarate <rzarate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 11:02:35 by rzarate           #+#    #+#             */
/*   Updated: 2018/06/22 00:18:22 by rzarate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	uint8_t	*p;
	uint8_t	*p2;

	i = 0;
	p = (uint8_t *)dst;
	p2 = (uint8_t *)src;
	while (i < n)
	{
		p[i] = p2[i];
		if (p2[i] == (uint8_t)c)
			return (&dst[i + 1]);
		i++;
	}
	return (NULL);
}
