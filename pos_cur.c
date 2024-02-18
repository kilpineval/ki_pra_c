#include <stdio.h>
#include <string.h>
//Acceso secuencial {"Carlos", "Maria", "Pedro", "Anibal"}
//Acceso Aleatorio {"Carlos", "Maria", "Pedro", "Anibal"}

/*Funciones
Funciones Utiles:

*rewind() Nos mueve el cursor al inicio del archivo
*fseek() Nos permite ir a la posicion determinada / con esta funcion se puede considerar al archivo como un gran vector(texto o byte)
*fteel() Nos indica en que posicion estoy en un momento determinado.

SEEK_SET (INICIO)
SEEK_CUR (ACTUAL)
SEEK_END(FINAL)
OFFSET indica el desplazamiento en relacion a la posicion de referencia.
*/

int main(){
    char archivo[10]= "datos.txt", cadena[80]="";

    FILE * ptr;
    long int inicio, final;


    ptr = fopen( archivo, "r");
    printf("El archivo  %s  ", archivo);
    if(ptr){
        printf("Se abrio correctamente\n");
    }else{
        printf("no se abrio correctament\n");
        return 1;
    }

    if((inicio=ftell(ptr)<0)) printf("Error inesperado al abrir ftell\n");
    else printf("La posicion inicial del cursor es: %d\n", inicio);

    fseek(ptr, 0L, SEEK_END);
    final =ftell(ptr);
    printf("El tamaño que tiene el archivo es %d bytes\n", final-inicio);

    fseek(ptr, 0L, SEEK_SET);
    fgets(cadena, 80, ptr);
    printf("El contenido que tienes en el archivo  es: %s\n",cadena);
    printf("El tamaño que tienes usando en longitud es: %d\n",strlen(cadena));
    fclose(ptr);

    return 0;

}

