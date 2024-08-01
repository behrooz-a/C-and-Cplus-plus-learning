#include<iostream>

using namespace std;

// A refence is not a variable and cannot receded (withdraw) to a different variable and once it has been declared it cannot be changed
// In line 17 after it will be confusing to debug it. To solve the issue, we need to const int& b= a; 
// If we use const then we will face an error which tells us we cannot to assign a value to it.


int main(){

    int a= (4);
    int* pointer= &a;
    int& b= a;
    cout<< "The value of a is : "<< a << endl;
    cout<< "The value of *pointer is : "<< *pointer<< endl;
    cout<< "The value of b is : "<< b<< endl;

    b= 1; // since y references to x, it changes the value of x 
    cout<< "The value of a is : "<< a << endl;
    cout<< "The value of *pointer is : "<< *pointer<< endl;
    cout<< "The value of b is : "<< b;

    return 0;

}