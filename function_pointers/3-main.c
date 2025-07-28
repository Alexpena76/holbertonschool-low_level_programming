#include "3-calc.h"

int main(int argc, char *argv[])
{
    int num1, num2, result;
    int (*operation_function)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    operation_function = get_op_func(argv[2]);
    if (operation_function == NULL)
    {
        printf("Error\n");
        exit(99);
    }
    if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && num2 == 0)
    {
        printf("Error\n");
        exit(100);
    }

    result = operation_function(num1, num2);
    printf("%d\n", result);
    return (0);
}