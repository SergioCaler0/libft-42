#include <stdio.h>
int ft_isalpha(char *c)
{
    int i;
    int salida;

    i = 0;
    salida = 1;
    while (c[i] != '\0')
    {
        if ((c[i] >= 65 && c[i] <= 90) || (c[i] >= 97 && c[i] <= 122))
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

/*int   main()
{
	char destino[] = "abd45";
    ft_isalpha(destino);
    printf("%d", ft_isalpha(destino));
}*/