#include <stdio.h>

int main(){
    
    char n;

    char resultado;
    
    printf("Pon un caracter mayuscula\n");

    scanf("%c", &n);

    resultado = n + 32;

    printf("%c\n", resultado);
}