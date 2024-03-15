#include <stdio.h>

/*  Access and modify structure’s members with the dot operator 
for string type we do not need & since we are dealing with address of the string*/

struct student{
	char firstName[30];
	char lastName[30];
	int birthYear;
	float aveGrade;
};

int main(void) {
    
    struct student learner;
    printf("First name: ");
    scanf("%s", learner.firstName);
    printf("Last name: ");
    scanf("%s", learner.lastName);
    printf("Year of birth:");
    scanf("%d", &learner.birthYear);
    printf("Average grade: ");
    scanf("%f", &learner.aveGrade);
    
    printf("Name: %s %s\n", learner.firstName, learner.lastName);
	printf("Year of birth: %d\n",learner.birthYear);
	printf("Average grade: %f\n",learner.aveGrade);
    
	return 0;
}
