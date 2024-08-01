#include <iostream>
#include <fstream>
using namespace std;
void ReadData (string path);
int main()
{
// Relative path
ReadData("example2.txt");
// Absolute path (your path may vary)
ReadData(" example2.txt");
return 0;
}

void ReadData (string path)
{
int number, counter = 1;
ifstream InputStream;
InputStream.open(path.c_str());

cout << "Reading from " << path << endl;
while ( InputStream >>number)
{
cout << "Value # " << counter++ << ": " << number << endl;
}
InputStream.close();
return;
}