#include <stdio.h>

int _strlen(char *s)
{
    int contador = 0;

    while (s[contador] != '\0')
    {
        contador++;
    }
    return(contador);
}

int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}