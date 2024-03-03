#include <stdio.h>
#include <string.h>

//fgets


int main(){
    FILE * ptr;
    char archivo[25] = "Expresiones.txt";
    char cadena[64];
    int i;


    ptr = fopen(archivo, "w");


    if(ptr){
        printf("El archivo \'%s\' se abrio de manera correcta. \n", archivo);

    }else{
        printf("Error al abrir el archivo\n");
        return 1;
    }
    printf("Escriba la expresion que Ud. desee y luego retorno para finalizar\n");
    do{
        gets(cadena);
       
        printf(ptr, "%s\n", cadena);
        printf("Escriba la expresion que Ud. desee y luego retorno para finalizar\n");
        
    }while(strcmp(cadena, "") !=0);
    fclose(ptr);

    printf("Vamos a leer las expresiones que has escrito\n");
    ptr = fopen(archivo, "r");

    if(ptr){
        printf("El archivo %s se abrio de manera correcta. \n", archivo);

    }else{
        printf("Error al abrir el archivo\n");
        return 1;
    }

    do{
        fgets(cadena, 64, ptr);
        puts(cadena);

    }while(!feof(ptr));
    fclose(ptr);
    return 0;

}
