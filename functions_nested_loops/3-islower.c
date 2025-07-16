#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int _islower(int c){
    char c;

    if(c >= 'a' && c <= 'z'){
        return(1);
    }
    else{
        return(0);
    }
}