#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int print_last_digit(int){


    for(int n = 0; n <= 23; n++){
        for(int m = 0; m <= 59; m++){
            int a = n + 48;
            int b = m + 48;
            int c = a / 10;
            int d = a % 10;
            int e = b / 10;
            int f = b % 10;
            _putchar(c);
            _putchar(d);
            _putchar(':');
            _putchar(e);
            _putchar(f);
            _putchar('\n');

        }
    }

    return(0);
}