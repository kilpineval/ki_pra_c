#include <stdio.h>


int main(){
    char archivo[10]="parrafo.txt";
    char cadena[80]="Esto es c con la plataforma de udemy";
    FILE * ptr;
    fpos_t posicion=0, inicio;

    ptr=fopen(archivo, "w+");
    printf("el archivo se guardara como \'%s\'\n",archivo);
    
    if (ptr){
        printf("El archivo se aperturo de manera correta\n");
    }else{
        printf("El archivo no se abrio de manera correcta");
        return 1;
    }

    fgetpos(ptr, &inicio);
    printf("EL indicador de indice de archivo es %d\n", posicion);

    fprintf(ptr, cadena);
    printf("La cadena: %s\n", cadena);

    fgetpos(ptr, &posicion);
    printf("EL indicador de indice de archivo es %d\n", posicion);

   

    
    return 0;

}