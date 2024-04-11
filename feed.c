#include <stdio.h>
#include <conio.h>


struct Distance{
    int feet;
    float inches;
};
struct Distance d1;
int main(){
    struct Distance d2;
    clrscr();
    d1.feet =17;
    d1.inches=7.6;
    d2.feet=14;
    d2.inches=2.5;

    printf("\n%d\'-%f\"",d1.feet, d1.inches);
    printf("\n%d\'-%f\"",d2.feet, d2.inches);

    getch();
    return 0;
}