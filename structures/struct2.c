#include <stdio.h>
#include <string.h>

/* Student:
// - name (string)
// - id (string)
// - age (int)
// - grades (int array)  
In this program we defined a structure to record the infromation of a students as well as the grades*/

struct Student{
    char name[50];
    char id[10];
    int age;
    int grades[5];
};

int main(viod){
    int i;
    struct Student Bill;
    strcpy(Bill.name,"John Waters");
    strcpy(Bill.id,"A209498");
    Bill.age=40;
    Bill.grades[0]=1;
    Bill.grades[1]=2;
    Bill.grades[2]=3;
    Bill.grades[3]=4;
    Bill.grades[4]=5;

    printf("Name: %s\n", Bill.name);
    printf("ID: %s\n", Bill.id);
    printf("Age: %d\n", Bill.age);
    printf("Grade[0]: %d\n", Bill.grades[0]);
    for (i=0; i<5;i++)
        printf("%d \n",Bill.grades[i] );
    return 0;
}
