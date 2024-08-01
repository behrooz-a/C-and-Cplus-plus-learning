# include <iostream>
# include <fstream>
using namespace std;

int main(){
    
    ofstream Output("output_example.txt"); 

    for (int i=1; i<= 100; i++)
        Output << i << " " ;
    
    Output.close();
    return 0;

}