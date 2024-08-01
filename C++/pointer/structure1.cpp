#include <iostream>
#include <string>
using namespace std;

struct Student {
    int Id {};
    float Grade {};
    string First_name;
    string Last_name;
};


int main(){
    Student student1;
    student1.Id = 123;
    student1.Grade = 90;
    student1.Last_name = "Robin";
    student1.First_name = "Jack";
    

    cout <<  "The student garde is: " << student1.Grade<<"\n";
    cout << "The student first name is: " << student1.First_name << "\n";
    cout << "The student last name is: " << student1.Last_name;

    return 0;}