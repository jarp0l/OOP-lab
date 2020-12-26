/*
 * Task #1:
 * Write a program in CPP to find the sum of two integer numbers and two float numbers
 * using the concept of function template.
 */

#include <iostream>

template <typename T>
T sum(T x, T y){
    return x+y;
}

int main(){
    int int_sum;
    float float_sum;
    
    int_sum = sum(1234, 45678);
    float_sum = sum(1.41456, 543.3432);

    std::cout << "Sum of integers = " << int_sum << std::endl;
    std::cout << "Sum of floats = " << float_sum << std::endl;
    
    return 0;
}