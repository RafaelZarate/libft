/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarate <rzarate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 01:02:16 by rzarate           #+#    #+#             */
/*   Updated: 2018/06/22 00:04:14 by rzarate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_iter(t_list *lst, void (*f)(t_list *elem))
{
	if (!lst && !f)
		return ;
	while (lst)
	{
		f(lst);
		lst = lst->next;
	}
}
