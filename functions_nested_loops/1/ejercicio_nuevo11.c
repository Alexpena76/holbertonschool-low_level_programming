#include <stdio.h>



int main()
{

    int arr[4] = {0, 4, 13, 25};

    int *ptr = arr;

    int a;

    for(int i = 0; i <= 3; i++)
    {
        printf("Pon un numero");
        
        scanf("%d", ptr + i);
        
        printf("%d\n", *(ptr + i));
    }
    for(int j = 0; j <= 3; j++)
    {
        printf("%d", *(ptr + j));
    }

    return (0);
}