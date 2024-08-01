#include<iostream>
using namespace std;

// '\0' is the null character employed to terminate C strings
// The null character has the same value as char( 0 )

int main(){
string str("Hello\0e");
for (int i=0; i< str.size(); i++){
    cout << str[i];
}
return 0;}