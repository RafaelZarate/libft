/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarate <rzarate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 01:13:49 by rzarate           #+#    #+#             */
/*   Updated: 2018/06/22 00:03:55 by rzarate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_del(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*next;

	tmp = *alst;
	while (tmp)
	{
		next = tmp->next;
		ft_lstdelone(&tmp, del);
		tmp = next;
	}
	*alst = NULL;
}
