/*
 * Task #1:
 * Write a program in CPP to overload unary ++ for postfix and prefix increment operation on complex
 * numbers using member function.
 */

#include <iostream>

using namespace std;

class Complex{
    float re, im;

    public:
        Complex(float, float);
        void print();
        Complex operator++();       //prefix
        Complex operator++(int);    //postfix
};

Complex::Complex(float t_re = 0.0, float t_im = 0.0){
    re = t_re;
    im = t_im;
}

void Complex::print(){
    cout << "Sum = ";
    cout << re << " + i " << im << endl;
}

Complex Complex::operator++(){
    Complex tmp;
    tmp.re = ++re;
    tmp.im = ++im;
    return tmp;
}

Complex Complex::operator++(int){
    Complex tmp;
    tmp.re = re++;
    tmp.im = im++;
    return tmp;
}

int main(){
    Complex c1(3, 1), c2(2, 5), c3;
    {
        c2 = c1++;      //post-increment in c1
        c3 = ++c2;      //pre-increment in c2

        c1.print();
        c2.print();
        c3.print();
    }
    cout << endl << endl;
    {
        c2 = ++c1;      //pre-increment in c1
        c3 = c2++;      //post-increment in c2

        c1.print();
        c2.print();
        c3.print();
    }
    return 0;
}
