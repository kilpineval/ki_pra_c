#include <stdio.h>
#include <conio.h>

struct student{
    int rollno;
    char subTopicDefinition[20];

};
void main(){
    clrscr();
    students s1={45, "Bhavin"}, s2={65, "Dhwani"};
    printf("%d\t%s\n",s1.rollno,s1.subTopicDefinition);
    printf("%d\t%s\n",s2.rollno,s2.subTopicDefinition);
    getch();
}
