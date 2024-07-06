#include <iostream>
using namespace std;
// This code make provide the sum of the numbers from 1 to n

int main() {
    int n;
    int S = 0;

    cout << "Enter an integer: ";
    cin >> n;

    if (n < 0)
        cout << "please enter a positive integer";
    else {
        for(int i = 1; i <= n; ++i) {
            S += i;
        }
        cout << "The sum of the numbers up to " << n << " = " << S;    
    }

    return 0;
}