#include <iostream>
#include <fstream>
using namespace std;
int main()
{
int number, counter = 1;

ifstream InputStream;
InputStream.open("example2.txt");

// we can provide the address of the file in two ways :
// (1) A relative path: based on the current folder and the other (2) An absolute path: we use the complete path like c:\\user\\"example2.txt" 


// The next line of code do the same as line 8 and 9. Means the code in line 16 replaces lines 8 and 9
//ifstream InputStream("example2.txt");

// if (InputStream.fail()):    When the file does not exist then it returns True   

    
if (InputStream.fail()){
    cout << "Error opening in file."  << endl;
    return 1;  // terminate the program
    
    }


while (InputStream >> number)
{
cout << "Value # " << counter++ << ": " << number << endl;
}


InputStream.close();
return 0;
}