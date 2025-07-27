#include "function_pointers.h"
#include <stdio.h>

void print_name(char *name, void (*f)(char *))
{
    if (name == NULL)
    {
        return;
    }

    if (f == NULL)
    {
        return;
    }

    f(name);
}