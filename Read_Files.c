#include <stdio.h>

int main(){
    int c, n=0;
    FILE * ptr;
    
    char archivo[10] = "datos.txt";
    if((ptr = fopen(archivo, "rt"))==NULL){
        printf("Lo sentimos no se puede abrir el archivo por alguna razon\n");
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
    printf("\n El archivo \'%s\' tiene %d lineas\n", archivo, n);
    fclose(ptr);
    return 0;
}