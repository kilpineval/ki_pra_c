#include <stdio.h>


int main(){
    char archivo[20]="escribir.txt";
    char cadena[150]="Esto es c con la plataforma de udemi practica practica  que pasa si sigo escribiendo sin apretar enter";
    FILE * ptr;
    fpos_t posicion=0, inicio;

    ptr=fopen(archivo, "w+" );
    printf("el archivo se guardara como \'%s\'\n",archivo);

    if (ptr){
        printf("El archivo se aperturo de manera correta\n");
    }else{
        printf("El archivo no se abrio de manera correcta");
        return 1;
    }
    fgetpos(ptr, &inicio);
    printf("El indicador de lineqa es un %d \n:",posicion);

    fprintf(ptr, &cadena);
    printf("la cadena es un %s \n:",cadena);

    fgetpos(ptr, &posicion);
    printf("El indicador de indice de archivo es un %d \n:",posicion);


    return 0;
    

}