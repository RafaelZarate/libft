/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarate <rzarate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 23:13:27 by rzarate           #+#    #+#             */
/*   Updated: 2018/06/22 01:17:47 by rzarate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*uitoa_base(uintmax_t n, uint8_t base)
{
	uintmax_t	i;
	size_t		len;
	char		*result;
	char		*hex_str;

	i = n;
	len = 1;
	hex_str = HEX_STRING;
	while ((i /= base))
		len++;
	result = ft_strnew(len);
	i = n;
	while (i)
	{
		result[--len] = str[i % base];
		i /= base
	}
	return (result);
}
