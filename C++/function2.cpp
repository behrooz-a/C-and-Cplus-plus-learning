# include <iostream>
using namespace std;

// This function doubles the number is in the main function
// since we return a value then we have a 

int func(int a){

    cout << "this is function()\n";
    return a*2;
    }

    int main(){
        int x=3;
        cout << "this is main()\n";
        x= func(42);
        cout << ( "The value is ()\n" , x);
        return 0;
    }

