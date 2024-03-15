#include <stdio.h>
/* A name for the variable instance new data type
struct student me */

struct student{
    char firstName[30];
    char lastName[30];
    int birthYear;
    float aveGrade;
};

int main(void) {
	
    struct student me = {"Peter", "Dixon", 1989, 3.5};
    struct student you = {"John", "Kutzner", 2005, 3.5};
    printf("Names: %s %s, %s %s\n", me.firstName, me.lastName, you.firstName, you.lastName);
    printf("Year of birth: %d\n", me.birthYear);
    printf("Average grade: %f\n", me.aveGrade);
	return 0;
}