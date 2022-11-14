/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scalero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:54:36 by scalero-          #+#    #+#             */
/*   Updated: 2022/11/14 18:40:37 by scalero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*save;

	save = NULL;
	len = ft_strlen(s);
	if (c == '\0')
		return ((char *)(s + len));
	while (len + 1 > 0)
	{
		if (*(s + len) == (unsigned char)c)
		{
			save = (char *)(s + len);
			return (save);
		}
		len--;
	}
	return (0);
}
