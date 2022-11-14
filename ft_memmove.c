/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scalero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:50:37 by scalero-          #+#    #+#             */
/*   Updated: 2022/11/14 10:47:27 by scalero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	int src_dst;

	src_dst = (dst - src);
	i = 0;
	if	(src == NULL && dst == NULL)
		return (NULL);
	if	(src_dst < 0)
	{
		while (len > 0)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			len--;
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			((unsigned char *)dst)[len -1] = ((unsigned char *)src)[len -1];
			len--;
		}
	}
	return (dst);
}
