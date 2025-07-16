#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int print_last_digit(int){

   
    int a;

    int b;

    int c;

    b = a % 10;

    if(b < 0){
        c = b * -1;
    }
    else{
        c = b * 1;
    }

    _putchar(c);

    return(0);
}