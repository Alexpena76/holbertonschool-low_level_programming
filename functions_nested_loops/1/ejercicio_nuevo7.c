#include <stdio.h>

void nueva_funcion(char *letra)
{
    *letra = *letra + 32;
}

int main(){

    char n;

    printf("Pon el caracter que deseas convertir");

    scanf("%c", &n);

    nueva_funcion(&n);

    printf("Caracter en minuscula seria: %c", n);

    return(0);
}