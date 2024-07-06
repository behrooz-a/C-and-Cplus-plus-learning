# include <iostream>

using namespace std;

// Define a function "func" that takes an integer argument "a" and increase it
// since this is a function reference by value we will not see any changes on value of a
void func(int a){
    ++a;
}

int main(){

    // Declare and initialize an integer variable "a" with the value 7
    int a {7};

    // Call the function "func" with the value of "a" as an argument
    func( a);
    // cout<< format("value is {}\n",a);
    cout<< "The result of the addition is " << a << endl;

    // Print the result of the addition (which remains unchanged)
    //std::cout << "The result of the addition is " << a << std::endl;

    // Return 0 to indicate successful execution
    return 0;
}