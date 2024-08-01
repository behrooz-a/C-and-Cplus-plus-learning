#include<iostream>
using namespace std;

// poniter has been reseated and does not points to variable a and it points to c instead


int main(){

    int a= (4);
    int* pointer= &a;
    int& b= a;
    cout<< "The value of a is : "<< a << endl;
    cout<< "The value of *pointer is : "<< *pointer<< endl;
    cout<< "The value of b is : "<< b<< endl;

    int c  {1}; // since y references to x, it changes the value of x 
    pointer = &c;


    cout<< "The value of a is : "<< a << endl;
    cout<< "The value of *pointer is : "<< *pointer<< endl;
    cout<< "The value of b is : "<< b;

    return 0;

}