# include <stdio.h>
# include <stdbool.h>

int main(void){
    int age =0;
    printf("Enter yuor age: ");
    scanf ("%d", &age);
    bool ageCheck = (age >= 18 &&  age <=120);
    if (ageCheck) {
        printf("Older than 18");}
    else if (age <=0 || age>120){
        printf("Invalid age");
    }else{
        printf("Younger than 18");
     }
    return 0;
}