#include <iostream>
using namespace std;

// the code ask the user to enetr 10 number and then afetr recording them in an array print them on the screen
// The number should be between 0 and 50 otherwise keep asking to enter a proper number

int main(){
    int array[10], index, number;
    
    
    
    for (int index=0; index<10; index++){
        cout << "enetr a number: ";
        cin >> array[index];
        
        
    }
    index= 10;  // or we can use sizeof(array)/4 -1;
    
    while (index ){
        cout<< array[index-1]<< "\t";
        index--;
    }


    return 0;
}