#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "_putchar.c"

int _isalpha(int c){

    char c;

    if((c >= 97 && c <= 122) || (c >= 65 && c <= 90)){
        return(1);
    }
    else{
        return(0);
    }
}