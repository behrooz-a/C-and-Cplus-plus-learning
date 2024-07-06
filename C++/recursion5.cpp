#include <iostream>
using namespace std;
// This code gets an integer and then generate the factorial

int main() {
    int n;
    int factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "The Factorial for a negative number doesn't exist, try it again!";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "The Factorial of " << n << " = " << factorial;    
    }

    return 0;
}