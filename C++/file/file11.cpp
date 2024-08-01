# include <iostream>
# include <fstream>
using namespace std;

// There is a series of random numbers and we are looking for the positive numbers and print the square root, and define if the number is prime or not

int prime(int a);

int main(){
    int NUM, SQR , PRIME=0;
    ifstream Input("sample1.txt"); 
    ofstream Output;
    Output.open("output_sample1.txt");


while (Input >> NUM){
    
    
    
    if (NUM > 0){

       
        PRIME= prime (NUM);
        
        Output << "The MIN is: " << NUM << " ";
        Output << "The MAX is: " << SQR << " " ;
        Output << "The number of inputs is: " << PRIME << endl;
        
        
        
    }}
    Input.close();
    Output.close();

    return 0;

}

int prime (int b){
    int res=1;
    if (b == 0 || b ==1)
        return res;

    for (int i=2; i <= b/2; i++)
        if (b%i == 0){
           res=0;
           break;
           return res;}

    return res;


}