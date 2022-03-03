/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:34:25 by akhachat          #+#    #+#             */
/*   Updated: 2021/02/07 18:33:03 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;
	unsigned char		a;

	i = 0;
	a = c;
	d = dst;
	s = src;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == a)
			return (d + i + 1);
		i++;
	}
	return (0);
}
