#include <stdio.h>

/* ptr is a pointer to a structure

we used ()around *ptr and if we did not employ them for instance at line 39 if we change it to *ptr.LastName then based on precedence of operations 
it executes dot operator first which ptr is not a structure while with the parentheses we dereference
first and then with dot we access to the LastName 
please refer to the link for understand the associativity of C operators:
 https://www.geeksforgeeks.org/operator-precedence-and-associativity-in-c/    */


struct Student{
	char FirstName[20];
	char LastName[20];
	int Age;	
};

void PrintStudent(struct Student);
void ReadStudent(struct Student *ptr);

int main(void) {
   
    struct Student student1;
    ReadStudent(&student1);
    PrintStudent(student1);
	return 0;
}

void ReadStudent(struct Student *ptr) {
    printf("\nEnter a new student record: \n");
    printf("First name: ");
    /* by using -> we first dereference the pointer first and then get the element
    -> has higher order of precedence than &*/
    scanf("%s", ptr->FirstName);
    printf("Last name: ");
    /* we need to dereference that so it goes to te memeory location thatkeeps the student record and then acess the last name of the student
    we did not use & since we are working with a string, but for reading the age we require first derefrence the ptr pointer
    and then access to the age element and finally fetch the address of that variable*/
    scanf("%s", (*ptr).LastName);
    printf("Average grade: ");
    scanf("%d", &(*ptr).Age);
    /* another way to write down line 41 is scanf("%d", &ptr->Age); since -> has higher order of precedence than & */
}

void PrintStudent(struct Student stud) {
    printf("The full name of student is: %s %s and ", stud.FirstName, stud.LastName);
	printf("the age is: %d\n",stud.Age);
}