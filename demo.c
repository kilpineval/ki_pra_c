#include<stdio.h>


void main(){
    FILE *f;
    f = fopen("demito.txt.txt", "r");
    if(f == NULL){
        printf("\n Can't open file or file doesn't exist.");
        exit(0);
    }
    fseek(f, 0, SEEK_END);
    printf("The size of file : %ld bytes", ftell(f));
    getch();

}