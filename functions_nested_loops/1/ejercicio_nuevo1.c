#include <stdio.h>

struct usuario 
{
    char nombre[7];

    int id;

    char hobby[10];

    int contraseña;
};

void nueva_funcion(struct usuario n)
{
    printf("%s\n", n.hobby); 
}

int main()
{

    struct usuario persona1 = {"Samuel", 1, "Futbol", 1234};

    struct usuario *ptr = &persona1;

    // printf("Nombre: %s\nid: %d\nhobby: %s\ncontraseña: %d\n", persona1.nombre, persona1.id, persona1.hobby, persona1.contraseña);

    persona1.id = 2;

    // printf("Nombre: %s\nid: %d\nhobby: %s\ncontraseña: %d\n", persona1.nombre, persona1.id, persona1.hobby, persona1.contraseña);

    // printf("%d", ptr -> id);

    nueva_funcion(persona1);

    return(0);
}


