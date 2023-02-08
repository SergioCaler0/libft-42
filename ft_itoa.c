/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scalero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:03:12 by scalero-          #+#    #+#             */
/*   Updated: 2023/02/08 13:03:19 by scalero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_calc_size_number(long nb)
{
	int	size;

	size = 0;
	if (nb < 0)
		size++;
	while (1)
	{
		nb = nb / 10;
		size++;
		if (nb == 0)
			break ;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	long	number;
	int		nb_len;
	char	*res;

	number = n;
	nb_len = ft_calc_size_number(n);
	res = ft_calloc(nb_len + 1, sizeof(char));
	if (!res)
		return (NULL);
	if (number < 0)
	{
		res[0] = '-';
		number *= -1;
	}
	res[nb_len] = '\0';
	if (number == 0)
		res[nb_len - 1] = '0';
	while (number != 0)
	{
		res[nb_len - 1] = (number % 10) + '0';
		number = number / 10;
		nb_len--;
	}
	return (res);
}
