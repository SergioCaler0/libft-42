/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scalero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:50:34 by scalero-          #+#    #+#             */
/*   Updated: 2023/02/08 16:59:49 by scalero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*strjoined;
	char	*str1;
	char	*str2;
	size_t	str1_siz;
	size_t	str2_siz;

	str1 = (char *)s1;
	str2 = (char *)s2;
	if (!s1 || !s2)
		return (NULL);
	str1_siz = ft_strlen(str1);
	str2_siz = ft_strlen(str2);
	strjoined = ft_calloc(str1_siz + str2_siz + 1, sizeof(char));
	if (!strjoined)
		return (NULL);
	ft_memcpy(strjoined, str1, str1_siz);
	ft_memcpy(strjoined + str1_siz, str2, str2_siz);
	strjoined[str1_siz + str2_siz] = '\0';
	return (strjoined);
}
