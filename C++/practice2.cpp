#include <iostream>
using namespace std;

// If we do not need if else complexity we use instead the turnary conditional operator. It is a shortcut to test a simple condition and simple outcome

int main(){
    auto a= 20, b =10;
    

    auto result = a>b ? "True" : "False";
        cout<< "The result for a is bigger than b is: " << result;
    

    return 0;
}