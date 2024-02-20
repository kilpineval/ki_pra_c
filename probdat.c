#include <stdio.h>

struct coche{
    char marca[100];
    char modelo[100];
    char color[100];
    int anio;


};

int main(){
    struct coche *ptr;
    struct coche coche1={"Audi","TT","AZul",1988};
    ptr = &coche1;
    printf("mi coche favorito es un %s y es de color %s tambien es del anio %d\n",coche1.marca, coche1.color, coche1.anio);
    printf("Tengo un auto de marca %s y es de color %s y es del anio %d", ptr->marca, ptr->color, ptr->anio);

    return 0;
}