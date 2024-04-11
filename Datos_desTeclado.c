#include <stdio.h>

struct personas{
    char nombre[80];
    char apellido[80];
    int edad;
    
};

int main(){

    struct personas DatosPersonas[4];
    printf("Por favor introduce cuatro nombres de tu familia\n");
    int i;
    for(i=0; i<4; i++){
        printf("Personas nro. %d\n",(i+1));
        printf("Nombre:  \n");
        gets(DatosPersonas[i].nombre);
        printf("Apellido: \n");
        gets(DatosPersonas[i].apellido);
        printf("Edad: \n");
        scanf("%d%c", &DatosPersonas[i].edad);
        printf("*********************");
    }
    
    printf("Las personas de tu familia son: \n");
    //int i;
    for(i=0; i<4; i++){

    
        printf("Persona nro. %d\n",(i+1));
        printf("Nombre:  \n",DatosPersonas[i].nombre);
        printf("Apellidos: \n",DatosPersonas[i].apellido);
        printf("Edad: \n", DatosPersonas[i].edad);
        printf("********************");
    }
    return 0;
}