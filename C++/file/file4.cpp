#include <iostream>
#include <fstream>
using namespace std;
int main()
{
int num, count = 1;
ifstream InputStream;
InputStream.open("example2.txt");

// we exit the loop when we reach the end of the file
while (InputStream >> num)
{
cout << "Number # " << count++ << " is " << num << endl;
}
// Once the next line run, InputStream will be closed and we can read from the file
InputStream.close();
return 0;
}