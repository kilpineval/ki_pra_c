#include <stdio.h>

int main(){
    int c, n=0;
    FILE * ptr;
    
    char archivo[50]="lectura.txt";
    if((ptr=fopen(archivo, "rt"))==NULL){
        printf("Error al abrir el fichero\n");
        return 1;
    }
    while((c=fgetc(ptr))!=EOF){
        if (c=='\n'){
            n++;
            printf("\n");

        }else{
            putchar(c);
        }
            
                                                                                                    }                                                                                                     printf("\n el archivo es de tipo \'%s\' y tienne %d lineas \n",archivo,n);
        fclose(ptr);
        return 0;
        return 0;
}