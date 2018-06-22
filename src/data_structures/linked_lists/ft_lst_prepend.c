/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_prepend.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarate <rzarate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 23:32:02 by rzarate           #+#    #+#             */
/*   Updated: 2018/06/22 00:02:18 by rzarate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_prepend(t_list **alst, t_list *new)
{
	if (*alst && alst && new)
	{
		new->next = *alst;
		*alst = new;
	}
	else if ((!*alst || !alst) && new)
		*alst = new;
}
