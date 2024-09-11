#include <stdio.h>

//Manejo de archivos en lenguaje c
//Lectura y apertura de archivos
//Flujo de datos con FILE *

//r abre un fichero para lectura
//w abre un fichero para escritura
//a abre un fichero para agregar datos al final del mismo.
//+ simbolo se utiliza para abrir el fichero en modo lectura y escritura
//b el Fichero de tipo binario
//t fichero de tipo texto

//Programa -> Canal -> Disco Duro -> Escritura
//Programa <- Canal de flujo <-Disco Duro <-Lectura

int main(){
    char archivo [10] = "datos.txt";
    FILE * ptr;
    int i;

    ptr = fopen(archivo, "a");
    printf("Archivo: %s\n", archivo);

    if(ptr==NULL){
        printf("Error al intentar abrir el archivo\n");
        return 1;
    }else{
        printf("Enhorabuena el archivo fue abierto o creado\n ");
    }

    printf("Vamos a escribir el alfabeto en el archivo\n");

    for(i=0; i<26; i++) printf("%c\n",fputc('A'+i, ptr));

    if(fclose(ptr)){
        printf("El archivo se cerro correctamente");


    }else{
        printf("El archivo no se cerro correctamente");
        
        return 1;
    }
    

    return 0;


    

}
