#include <stdio.h>

void intercambiar(int *a, int *b)
{

    int ptr = 0;

    ptr = *a;
    *a = *b;
    *b = ptr;
}

int main()
{

    int num1 = 5;
    int num2 = 7;

    printf("%d %d", num1, num2);

    intercambiar(&num1, &num2);

    printf("%d %d", num1, num2);

    return(0);
}