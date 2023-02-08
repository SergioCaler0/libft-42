/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scalero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:09:12 by scalero-          #+#    #+#             */
/*   Updated: 2023/02/08 17:03:19 by scalero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	src_len;
	size_t	index;

	if (!s)
		return (NULL);
	src_len = ft_strlen(s);
	substr = ft_calloc(len + 1, sizeof(char));
	if (!substr)
		return (NULL);
	index = 0;
	while (index < len && start + index < src_len)
	{
		substr[index] = s[index + start];
		index++;
	}
	substr[index] = '\0';
	return (substr);
}
