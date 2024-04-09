#include <stdio.h>

struct autos{
    char marca[50];
    char modelo[50];
    int anio;

};

int main(){
    struct autos misAutos[4] = {"Audi", "TT",2000, "Renualt", "Clio", 2005, "Ford", "Mustang", 1999, "Citroen" "c4", 2011};
    printf("Mis autos son: \n");
    int i;
    for(i=0; i<4; i++){
        printf("%s, y el modelo %s, es del anio %d\n",misAutos[i].marca, misAutos[i].modelo, misAutos[i].anio);
    }
    return 0;

}