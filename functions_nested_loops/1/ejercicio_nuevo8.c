#include <stdio.h>

struct carro
{
    char color[15];
    char estilo[15];
    char marca[15];

};


int main()
{

    struct carro carro1 = {"negro", "sedan", "Hyundai"};

    carro1.color = "rojo";


    return(0);
}