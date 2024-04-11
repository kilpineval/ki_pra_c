#include <stdio.h>

int f1(void);//void (no obtiene parametros)
int f2(void);
int f3(void);


int main(){
    int (*p)(void);
    p=f1;
    printf("%d\n", p());

    p=f2;
    printf("%d\n", p());

    p=f3;
    printf("%d\n", p());

    return 0;

}

int f1(void){
    return 1;
}

int f2(void){
    return 2;
}

int f3(void){
    return 3;
}