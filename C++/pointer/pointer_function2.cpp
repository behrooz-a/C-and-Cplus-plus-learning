// By comaring to this code and the previous one (pointer_function2.cpp) we are using a pointer which affect the 
// value of the variable in the function

#include <iostream>
using namespace std;
 
void function(int* pointer) {
     *pointer = 8; }
 

int main()
{
    int a = 0;
    cout << "a before calling the function: " << a << endl;
    function(&a);
 
    cout << "a after calling the function: " << a << endl;
    return 0;
}