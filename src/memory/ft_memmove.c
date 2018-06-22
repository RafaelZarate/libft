/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarate <rzarate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 11:14:45 by rzarate           #+#    #+#             */
/*   Updated: 2018/06/22 00:27:18 by rzarate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	uint8_t	*p;
	uint8_t	*p2;

	i = 0;
	p = (uint8_t *)dst;
	p2 = (uint8_t *)src;
	if (p < p2)
	{
		while (i < len)
		{
			p[i] = p2[i];
			i++;
		}
	}
	else
	{
		while (len--)
			p[len] = p2[len];
	}
	return (dst);
}
