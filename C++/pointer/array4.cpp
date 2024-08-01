#include<iostream>
#include <cmath>
using namespace std;


// Modify the previous example (array3.cpp)  to create a new array which takes each element of the array to the power of 3.

int main (){
    int array_a[10]= {};
    int array_b[10]= {};
    cout<< "i" "\t" "a[i]""\t" "b[i]"<< endl; 
    for (int i=0; i<10;i++){
        array_a[i]=i+1;
        array_b[i]= pow(array_a[i],3);
        cout << i << '\t';
        cout <<  array_a[i] << '\t';
        cout << array_b[i] << endl;
        
    }
    
    return 0;
}