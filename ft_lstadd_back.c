/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 16:23:59 by akhachat          #+#    #+#             */
/*   Updated: 2021/02/07 15:20:19 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *l;

	if (!(*lst))
		*lst = new;
	else
	{
		l = *lst;
		while (l->next)
			l = l->next;
		l->next = new;
	}
}
