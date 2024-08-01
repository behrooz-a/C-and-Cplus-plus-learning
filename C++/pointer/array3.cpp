#include<iostream>
using namespace std;

// Create an array x which keeps 10 integers and assign the numbers 1 to 10 to consecutive elements.

// Finally print the elements of an array to the console.

int main (){
    int array_a[10]= {};
    for (int i=0; i<10;i++){
        array_a[i]=i+1;
        cout << "a["<<i<<"] = " << array_a[i] << endl;
    }
    cout<< "The size of array is a[i]= " <<sizeof(array_a) << " bytes"; 
    return 0;
}