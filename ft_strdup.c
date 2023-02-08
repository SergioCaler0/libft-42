/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scalero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:07:39 by scalero-          #+#    #+#             */
/*   Updated: 2023/02/08 16:49:52 by scalero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	spc_req;
	char	*duplicate;

	spc_req = ft_strlen(s1);
	duplicate = ft_calloc(spc_req + 1, sizeof(char));
	if (duplicate)
	{
		ft_memcpy(duplicate, s1, spc_req);
		duplicate[spc_req] = '\0';
	}
	else
		return (NULL);
	return (duplicate);
}
