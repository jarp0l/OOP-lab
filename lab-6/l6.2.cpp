/*
 * Task #4:
 * WAP in CPP to illustrate the concept of constructor and destructor invocation in single inheritance.
 */

#include <iostream>

using namespace std;

class A{
    public:
        A(){
            cout << "Invoked constructor of base class A!" << endl;
        }

        ~A(){
            cout << "Invoked destructor of base class A!" << endl;
        }
};

class B : public A{
    public:
        B(){
            cout << "Invoked constructor of derived class B!!" << endl;
        }

        ~B(){
            cout << "Invoked destructor of derived class B!!" << endl;
        }
};

int main(){
    B obj;

    return 0;
}