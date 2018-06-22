/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarate <rzarate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 10:56:36 by rzarate           #+#    #+#             */
/*   Updated: 2018/06/22 00:25:37 by rzarate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	uint8_t	*p;
	uintt_t	*p2;

	i = 0;
	if (!n || dst == src)
		return (dst);
	p = (uint8_t *)dst;
	p2 = (uint8_t *)src;
	while (i < n)
		p[i] = p2[i++];
	return (dst);
}
