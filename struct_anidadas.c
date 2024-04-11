#include <stdio.h>

struct infoDireccion{
    char calle [40];
    int numero;
    char estado[40];
    char codpost[6];

};

struct infoUsuario{
    char nombre[40];
    char apellido[40];
    struct infoDireccion dir;
    char telefono[15];
};

int main(){
    struct infoUsuario maria={
        "Maria",
        "Sosa",
        {"Avenida Cors", 2045, "Buenos Aires", "7800"}, "224-645-2019"
    };
    printf("Usuario: %s, %s\n", maria.apellido, maria.nombre);
    printf("Direccion: %s %d\nEstado: %s\n",maria.dir.calle, maria.dir.numero, maria.dir.estado);
    printf("Codigo postal: %s\n", maria.dir.codpost);
    return 0;
}