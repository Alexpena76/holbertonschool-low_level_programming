#include <unistd.h>
#include "main.h"

int _strlen(char *s)
{
    int contador = 0;

    while (s[contador] != '\0')
    {
        contador++;
    }
    return(contador);
}

void _puts(char *str)
{
    int n;

    n = _strlen(str);

    write(1, str, n);

    _putchar('\n');
}
