#include <stdio.h>

void nueva_funcion(int *a)
{
    *a = (*a) * (*a);

}

int main()
{
    int num1;

    printf("Pon el valor que quieres que tenga num1");

    scanf("%d", &num1);

    nueva_funcion(&num1);

    printf("%d", num1);

}