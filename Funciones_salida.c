#include <stdio.h>

//funciones fprintf(), fscanf() y feof()


int main(){
    FILE* ptr;
    char archivo[20] = "MiEscritura.txt";
    char cadena[80];

    ptr = fopen(archivo, "w");
    if(ptr){
        printf("Archivo %s abierto\n",archivo);
    }else{
        printf("Errror al intentar abrir el archivo\n");
        return 1;
    }
    fprintf(ptr, "Estoy aprendiendo c\n");
    fprintf(ptr, "En la plataforma Udemy\n");
    fprintf(ptr, "Con el instructor Alvaro Chirou\n");
    fprintf(ptr, "Ojala que puedan aprender mucho.\n");

    if(fclose(ptr)){
        printf("Error al cerrar el archivo\n");
        return 1;
    }else{
        printf("EL archivo se cerro de manera correcta,");
    }

    ptr = fopen(archivo, "r");
    if(ptr){
        printf("Archivo %s abierto\n",archivo);
    }else{
        printf("Errror al intentar abrir el archivo\n");
        return 1;
    }
    do{
        fgets(cadena, 80, ptr );
        puts(cadena);


    }while(!feof(ptr));

    if(fclose(ptr)){
        printf("Error al cerrar el archivo\n");
        return 1;
    }else{
        printf("EL archivo se cerro de manera correcta.");
    }
    return 0;



}
