#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char cadena[20];//Declaramos nuestra cadena con limite de caracteres
    printf("ingresa la cadena que deseas guardar: \n");//Solicitamos captura de datos
    fgets(cadena,20,stdin );//guardamos la variable en "cadena"
    printf("\n");//salto de linea
    printf("La cadena guardada es:  ");
    puts(cadena);//Desplegamos el valor de la variable cadena"
    return 0;
}