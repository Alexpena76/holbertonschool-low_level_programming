#include <stdio.h>

int main()
{

    int n = 5;

    int o = 3;

    int *m = &n;

    int *p = &o;

    printf("%d\n", n);

    printf("%p\n", &n);

    printf("%p\n", m);

    printf("%d\n", *m);

    *m = 7;

    printf("%d\n", n);

    printf("%d", p);

    printf("%d", *p);

    return(0);
}