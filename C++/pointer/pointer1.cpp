#include<iostream>
using namespace std;

// A pointer is a variable which keeps the memory address of the other variable.  We can dereference a pointer with the * operator.
// An alias of an existing variable is called a references: A pointer is doing the same thing which keeps the address of an objet.
// To return the address of the variable, we employ & which is the address operator.



int main(){

    int a (4), b{1};
    int* pointer= &a;
    cout<< "The value of where the pointer referencing is : "<< *pointer<< endl;
    
    ++*pointer;
    cout << "The value of where the pointer referencing after increment is : "<< *pointer<< endl;

    ++pointer = &b;
    cout << "The value of where the pointer referencing after reassigning is : "<< *pointer;

    return 0;

}