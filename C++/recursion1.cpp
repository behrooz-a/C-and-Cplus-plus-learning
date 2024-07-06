# include <iostream>

// this function fetch one numebr and then add it to the previous number and the main function print the sum result of two numbers

using namespace std;
int sum(int n);

int main(){
    int x;
    cout << "Enter x:";
    cin>> x;
    cout<< " The sum of " << x << " and the previous number is " << sum(x) << ".\n";
    return 0;
}

int sum(int n){

    return (n-1+n);
}

