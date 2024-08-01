
//  passing an argument to a function without a pointer

#include <iostream>
using namespace std;
 
void function(int a) {
 a = 3; }
 

int main()
{
    int a = 0;
    cout << "value of x before calling fun: " << a << endl;
    function(a);
 
    cout << "value of x after calling fun: " << a << endl;
    return 0;
}