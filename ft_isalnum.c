#include <stdio.h>
int ft_isalnum(char *c)
{
    int i;
    int resultado;

    i = 0;
    resultado = 1;
    while (c[i] != '\0')
    {
        if ((c[i] >= 48 && c[i] <= 57) || (c[i] >= 65 && c[i] <= 90) || (c[i] >= 97 && c[i] <= 122))
            resultado = 1;
        else
        {
            resultado = 0;
            break;
        }
        i++;
    }
    return resultado;
}

/*int main()
{
    char destino[] = "12f.3d";
    ft_isalnum(destino);
    printf("%d", ft_isalnum(destino));
}*/
