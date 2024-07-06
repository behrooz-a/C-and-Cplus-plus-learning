
// C++, Area of a circle with a function which hets

#include <iostream>

float input();
int main(){
    float R,area,pi;
    pi=3.14;      
    R=input();
    area=pi*R*R;    
    std::cout << "The result of the area is: " << area << std::endl;
    return (0);
}

float input(){    
    int a;
    std::cout<<"Insert the the radius of the circle: ";
    std::cin >> a;
    return a;
}
