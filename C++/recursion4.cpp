#include <iostream>
using namespace std;
// This code make provide the sum of the numbers from 1 to n but with using a function
// It is the update of the previous example (recursion3.cpp)


int SUM(int a){
    int S=0;
    for(int i = 1; i <= a; ++i) 
        S += i;
return S;
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if (n < 0)
        cout << "please positive";
    else {        
        cout << "The sum of the numbers up to " << n << " = " << SUM(n);    
    }
    return 0;
}