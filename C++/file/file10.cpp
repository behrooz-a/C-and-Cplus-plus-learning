# include <iostream>
# include <fstream>
using namespace std;

// There is a series of random numbers and we are looking for the largest and smallest and print the MAX, MIN, and the nubmer of investigations

int main(){
    int min,max,num,count=0;
    ifstream Input("sample1.txt"); 

while (Input >> num){

    
    if (count++ ==0)

        { min= num;
        max= num;
        //count += 1;
        }
    else    {
        if (num < min)
           { min = num;
           
           }

        else if (num > max)
       
            max= num;
            
          }}
    Input.close();
    cout << "The MIN is: " << min << endl;
    cout << "The MAX is: " << max << endl;
    cout << "The number of inputs is: " << count;
    return 0;

}