/*
 * Task #2:
 * Write a program in CPP to overload unary ++ for postfix and prefix increment operation on complex
 * numbers using non-member/friend function.
 */

#include <iostream>

using namespace std;

class Complex{
    float re, im;

    public:
        Complex(float, float);
        void print();
        friend Complex operator++(Complex &);       //prefix
        friend Complex operator++(Complex &, int);    //postfix
};

Complex::Complex(float t_re = 0.0, float t_im = 0.0){
    re = t_re;
    im = t_im;
}

void Complex::print(){
    cout << "Sum = ";
    cout << re << " + i " << im << endl;
}

Complex operator++(Complex &t_obj){
    Complex tmp;
    tmp.re = ++t_obj.re;
    tmp.im = ++t_obj.im;
    return tmp;
}

Complex operator++(Complex &t_obj, int){
    Complex tmp;
    tmp.re = t_obj.re++;
    tmp.im = t_obj.im++;
    return tmp;
}

int main() {
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