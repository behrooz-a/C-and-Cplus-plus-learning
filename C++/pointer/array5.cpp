#include<iostream>
using namespace std;


// This code generates Fibonacci sequence up tp 30

int main (){
    int Fibonacci[32]= {0,1,1};
    
    cout<< "i" "\t" "F[i]"<< endl; 
    cout<< "----------------"<< endl; 
    
    for (int i=1; i<=30;i++){
        
        Fibonacci[i+1]= Fibonacci[i]+Fibonacci[i-1];
        cout << i << '\t';
        
        cout <<Fibonacci[i] << endl;
        
    }
    
    return 0;
}