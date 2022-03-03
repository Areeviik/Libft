/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 16:08:46 by akhachat          #+#    #+#             */
/*   Updated: 2021/02/06 18:03:05 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char	*t;
	size_t		i;

	t = src;
	i = dstsize;
	if (i != 0)
	{
		while (--i != 0)
		{
			if ((*dst++ = *src++) == '\0')
				break ;
		}
	}
	if (i == 0)
	{
		if (dstsize != 0)
			*dst = '\0';
		while (*src++)
			;
	}
	return (src - t - 1);
}
