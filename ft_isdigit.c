/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scalero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:05:41 by scalero-          #+#    #+#             */
/*   Updated: 2022/10/10 16:05:45 by scalero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_isdigit(char *c)
{
    int i;
    int salida;

    i = 0;
    salida = 1;
    while (c[i] != '\0')
    {
        if (c[i] >= 48 && c[i] <= 57)
             salida = 1;
        else
        {
             salida = 0;
             break;
        }
		i++;
    }
	return salida;
}

/*int main()
{

	char destino[] = "123j";
	ft_isdigit(destino);
    printf("%d", ft_isdigit(destino));
}*/

