#include <iostream>
#include <fstream>
using namespace std;
int main()
{
ofstream OutputFile;
OutputFile.open("output_example.txt");
OutputFile << "Happy coding with C++!";
OutputFile.close();
return 0;
}