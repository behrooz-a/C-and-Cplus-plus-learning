#include <iostream>
#include <fstream>
using namespace std;

int main()
{
ifstream InputStream;
int num1, num2, num3;
InputStream.open("big ol' list.txt");
InputStream>> num1 >> num2 >>num3;
InputStream.close();
cout << num1 << " " << num2 << " \n" << num3;
return 0;
}