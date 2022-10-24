/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scalero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:36:53 by scalero-          #+#    #+#             */
/*   Updated: 2022/10/24 14:21:15 by scalero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	size_t index;
	index = 0;
	while (index < len)
		((unsigned char *)b)[index ++] = c;
	return (b);
}

