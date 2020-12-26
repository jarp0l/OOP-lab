/*
 * Task #5:
 * Write a program in CPP to illustrate the concept of rethrowing an exception.
 */

#include <iostream>

class Exceptions{
    public:
        class LargeValue{ };
        class UnhandledException{ };
};

template <typename T1, typename T2>
void multiply(T1 x, T2 y){
    try{
        if (x > 100000000000 || y > 100000000000){
            throw Exceptions::LargeValue();
        }
        else
            std::cout << "Product of " << x << " and " << y << " = " << x * y << std::endl;
    }
    catch(Exceptions::LargeValue){
        std::cerr << "Unable to handle the exception. Rethrowing..." << std::endl;
        throw Exceptions::UnhandledException();
    }
}

int main(){

    try{
        multiply(1000, 2.5121324);
        multiply(10001, 2123);
        multiply(2300000000000, 21299873);
    }
    catch(Exceptions::UnhandledException){
        std::cerr << "Value(s) too large for multiplication." << std::endl;
    }
    
    return 0;
}