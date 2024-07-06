// Learning C++ 
// This code is getting the radius and then print the area of a circle

#include <iostream>

int main(){
    float r,area,pi;
    pi=3.14;
    std::cout << "Insert the radius of the circle" << std::endl;
    std::cin >> r;

    area=pi*r*r;

    
    std::cout << "The area of the circle is " << area << std::endl;
    return (0);
}
