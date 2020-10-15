/*
 * Task #3:
 * Write a program in CPP to find the sum of two complex numbers using the concept of the overloading
 * binary + operator using member function.
 */

#include <iostream>

using namespace std;

class Complex{
    float re, im;

    public:
        Complex(float, float);
        void printSum();
        Complex operator+(Complex);
};

Complex::Complex(float t_re = 0.0, float t_im = 0.0){
    re = t_re;
    im = t_im;
}

void Complex::printSum(){
    cout << "Sum: ";
    cout << re << " + i " << im << endl;
}

Complex Complex::operator+(Complex t_obj){
    Complex tmp;

    tmp.re = this->re + t_obj.re;
    tmp.im = this->im + t_obj.im;

    return tmp;
}

int main(){
    Complex c1(1.414, 1.732), c2(1, 0.5), c3;
    c3 = c1 + c2;
    c3.printSum();
    
    return 0;
}