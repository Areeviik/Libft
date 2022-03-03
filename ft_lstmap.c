/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 18:10:21 by akhachat          #+#    #+#             */
/*   Updated: 2021/02/07 16:18:24 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_lst;
	t_list	*n_el;

	if (!lst || !f)
		return (NULL);
	if (!(n_el = ft_lstnew(f(lst->content))))
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	n_lst = n_el;
	lst = lst->next;
	while (lst)
	{
		if (!(n_el = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&n_lst, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&n_lst, n_el);
	}
	return (n_lst);
}
