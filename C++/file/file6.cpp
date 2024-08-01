#include <iostream>
#include <fstream>
using namespace std;
void CheckFile (string);

int main()
{
// Real file 
CheckFile ("example2.txt");
// Fake file
CheckFile ("FakeFile.txt");
return 0;
}

void CheckFile (string path)
{
ifstream InputStream;
InputStream.open(path.c_str());

if (InputStream)
   cout << "True" << endl;
else
   cout << "False" << endl;

InputStream.close();

return;
}