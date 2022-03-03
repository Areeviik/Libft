/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 18:15:19 by akhachat          #+#    #+#             */
/*   Updated: 2021/02/06 17:57:44 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			d;
	size_t			s;
	unsigned int	i;

	s = 0;
	while (src[s])
		s++;
	d = 0;
	while (dst[d])
		d++;
	if (dstsize <= d)
		s += dstsize;
	else
		s += d;
	i = 0;
	while (src[i] && d + 1 < dstsize)
		dst[d++] = src[i++];
	dst[d] = '\0';
	return (s);
}
