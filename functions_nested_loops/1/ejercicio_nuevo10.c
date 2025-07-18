#include <stdio.h>

void nueva_funcion(int a, int b, int *res)
{
    *res = a + b;
}

int main(){

    int n = 5;

    int m = 3;

    int resultado;

    int *ptr = &resultado;

    *ptr = n + m;

    printf("%d\n", *ptr);

    printf("%d\n", resultado);

    nueva_funcion(n, m, &resultado);

    printf("%d\n", resultado);
}