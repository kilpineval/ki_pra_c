include <stdio.h>

int main(int argc, char **argv){

char*p;
 /*creamos
un
 puntero
a un
byte*/ 
 
if (argc==1){
 
 
printf("\nIngrese un argumento al programa\n");
texto*/ 

return 1;
 

 
}
 p=0x30000/*el puntero apunta a 0x30000*/ 
 *p=argv[1][0]/*el primer caracter del primerargumento locopiamosalaposición 0x30000*/
 
return 0;
 
}
 