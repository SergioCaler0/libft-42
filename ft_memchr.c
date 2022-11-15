/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scalero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 08:41:39 by scalero-          #+#    #+#             */
/*   Updated: 2022/11/15 09:40:33 by scalero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i; 

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)s == (unsigned char)c)
		{
			return ((void *)s);
		}
		s++;
		i++;
	}
	return (NULL);

}
