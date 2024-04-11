
#include <stdio.h>

int main(){
    int c, n=0;
    FILE * ptr;
    char archivo[50]="lectura.txt";
    if((ptr=fopen(archivo, "rt"))==NULL){
        printf("el archivo no se puede abrir por alguna razon");
        return 1;
    
    }
    while((c=fgetc(ptr))!=EOF){
        if(c=='\n'){
            n++;
            printf("\n");
        }else{
            putchar(c);
        }
    }
    printf("el archivo es de tipo \'%s\' y tienne %d de lineas",archivo,n);
    fclose(ptr);
    return 0;
}























