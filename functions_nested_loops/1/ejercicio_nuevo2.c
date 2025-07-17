#include <stdio.h>

void una_funcion(int a, int b, int *ptr)
{
    int c;

    c = a + b;

    *ptr = c;
}

int main()
{

    int num1;

    int d;

    int num2 = 3;

    printf("Aqui vas a poner un numero que se va a sumar con 3");

    scanf("%d", &num1);

    una_funcion(num1, num2, &d);

    printf("%d", d);

    return(0);
}

