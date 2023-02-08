/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scalero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:45:31 by scalero-          #+#    #+#             */
/*   Updated: 2023/02/08 16:45:37 by scalero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	index;

	index = 0;
	while (index <= n)
	{
		if (((unsigned char *)src)[index] != (unsigned char)c)
		{
			((unsigned char *)dst)[index] = ((unsigned char *)src)[index];
		}
		else if (((unsigned char *)src)[index] == (unsigned char)c)
		{
			((unsigned char *)dst)[index] = ((unsigned char *)src)[index];
			return ((void *)dst + 1);
		}
		index++;
	}
	return (NULL);
}
