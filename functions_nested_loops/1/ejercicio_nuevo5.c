#include <stdio.h>

void nueva_funcion(int a, int b, int *resultado)
{

    *resultado = a + b;
}

int main()
{

    int num1 = 2;

    int num2 = 3;

    int nuevo_resultado;

    nueva_funcion(num1, num2, &nuevo_resultado);

    printf("%d", nuevo_resultado);


}