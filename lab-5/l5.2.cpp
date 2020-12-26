/*
 * Task #4:
 * Write a program in CPP to handle divide by zero exception using the concept of exception handling.
 */

#include <iostream>

template <typename T1, typename T2>
void divide(T1 x, T2 y){
    if (y == 0)
        throw "ZeroDivisionError: division by zero";
    
    std::cout << x << "/" << y <<  " = " << x/y << std::endl; 

}

int main(){

    try{
        divide(10, 2.5);
        divide(513.33, 7.7);
        divide(23, 0);
    }
    catch(const char err[]){
        std::cerr << err << std::endl;
    }
    
    return 0;
}