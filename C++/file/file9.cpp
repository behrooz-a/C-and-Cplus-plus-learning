# include <iostream>
# include <fstream>
#include <cmath>

using namespace std;

int factorial(int k);
int main(){
    
    ofstream Output("output_example2.txt"); 
    Output << "n" << '\t' << "Even" << '\t' << "n^2" << '\t' << "n!" << '\n';
    for ( int i=0; i <= 14;i++){
     Output <<  "--" ;
    }
    Output <<  "\n" ;

    for (int i=1; i<= 15; i++)
        
        Output << i << '\t' << (i%2 == 0) << '\t' << pow(i,2 ) << '\t' << factorial( i) <<'\n';



    
    Output.close();
    return 0;

}

int factorial(int k){
    int fact=1;
    for (int i=1; i<= k; i++)
      fact *= i;
     return  fact;
}