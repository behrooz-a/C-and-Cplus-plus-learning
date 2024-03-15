# include <stdio.h>
# include <string.h>

/* build a structure data type for personnel of a company*/

struct personnel {
    char name[20];
    double wage;
    int age;
    char id[20];

};

int main(){
    struct personnel personnel1;
    struct personnel personnel2;
    
    strcpy(personnel1.name,"John Waters");
    strcpy(personnel1.id, "0198346");
    personnel1.age=30;
    personnel1.wage=3512.9;
    
    printf("The name of personnel1: %s\n",personnel1.name);
    printf("The age of personnel1: %d\n",personnel1.age);
    printf("The wage of personnel1: %.5f", personnel1.wage);
    
    personnel2.age= 23;
    personnel2.wage=6501.3;
    printf("\nThe age of personnel2: %d\n", personnel2.age);
    printf("The wage of personnel2: %.2f", personnel2.wage);


    return 0;
}