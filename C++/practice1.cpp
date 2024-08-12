#include <iostream>
using namespace std;

// we need the type from the initialization and there are various advamtage in using it one one of them is when a function returns and the data type changes, that works..
//https://learn.microsoft.com/en-us/cpp/cpp/auto-cpp?view=msvc-170
// In the following codes, else condition will be run when we have in parentheses  false, 0 even null terminator \0 or "" or " " lead to true

int main(){
    auto a= 20;
    auto b=10;

    if("\0")  // condition
        cout<< "a is bigger than b\n";
    else    
        cout << "a is smaller than b";
    

    return 0;
}