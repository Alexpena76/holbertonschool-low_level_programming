#include <stdio.h>

struct usuario 
{
    char nombre[7];

    int id;

    char hobby[10];

    int contraseña;
};

void nueva_funcion(struct usuario *n)
{
    // Se usa una flecha para ver el valor de un puntero de tipo objeto
    n -> id += 1;
}

int main()
{

    struct usuario persona1 = {"Samuel", 1, "Futbol", 1234};

    struct usuario *ptr = &persona1;

    // printf("Nombre: %s\nid: %d\nhobby: %s\ncontraseña: %d\n", persona1.nombre, persona1.id, persona1.hobby, persona1.contraseña);

    persona1.id = 2;

    // printf("Nombre: %s\nid: %d\nhobby: %s\ncontraseña: %d\n", persona1.nombre, persona1.id, persona1.hobby, persona1.contraseña);

    // printf("%d", ptr -> id);

    nueva_funcion(&persona1);

    printf("%d", persona1.id);

    return(0);
}

// La flecha se usa para apuntar hacia el valor de una direccion de memoria de una struct

