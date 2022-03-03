/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:39:01 by akhachat          #+#    #+#             */
/*   Updated: 2021/02/07 18:18:41 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		buf[len];
	unsigned char		*dst_cpy;
	unsigned const char	*src_cpy;

	i = 0;
	dst_cpy = dst;
	src_cpy = src;
	while (i < len)
	{
		buf[i] = src_cpy[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		dst_cpy[i] = buf[i];
		i++;
	}
	return (dst);
}
