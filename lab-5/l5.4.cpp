/*
 * Task #2:
 * Write a program in CPP to find the area of rectangle with integer and float dimensions
 * using the concept of class template.
 */

#include <iostream>

template <typename T1, typename T2>
class Area{
    public:
        float calculateArea(T1 x, T2 y){
            return x * y;
        }
};

int main(){
    int length = 23;
    float breadth = 13.37;
    
    Area<int, float> rectangle;

    std::cout << "Area of rectangle = " << rectangle.calculateArea(length, breadth) << std::endl;
    
    return 0;
}