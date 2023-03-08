/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scalero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:57:51 by scalero-          #+#    #+#             */
/*   Updated: 2023/03/08 18:53:44 by scalero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	index;
	size_t	len;

	index = 0;
	len = ft_strlen(s);
	while (index <= len)
	{
		if (*s == (unsigned char)c)
		{
			return ((char *)(s));
		}
		s++;
		index++;
	}
	return (NULL);
}
