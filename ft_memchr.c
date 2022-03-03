/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 17:47:50 by akhachat          #+#    #+#             */
/*   Updated: 2021/02/07 18:26:10 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*s_cpy;
	unsigned char		a;

	s_cpy = s;
	a = c;
	i = 0;
	while (i < n)
	{
		if (s_cpy[i] == a)
			return ((char*)s + i);
		i++;
	}
	return (0);
}
