#include <stdio.h>

/* in struct3.c we need to print separately, and it can be annoying.
We implement a function with a prototype on top then by a function we print the elements in a structure.
We passed a structure to a function by value.  */


struct student{
	char firstName[30];
	char lastName[30];
	int birthYear;
	float aveGrade;
};
void printStudent(struct student stud);
int main(void) {
	
	struct student me={"Peter", "Dixon", 1989, 3.5};
	struct student you={"Rita", "Kutzner", 2005, 3.5};
	
	printStudent(me);
	printStudent(you);
	return 0;
}

void printStudent(struct student stud){
    printf("Name: %s %s\n", stud.firstName, stud.lastName);
	printf("Year of birth: %d\n",stud.birthYear);
	printf("Average grade: %f\n",stud.aveGrade);
}
