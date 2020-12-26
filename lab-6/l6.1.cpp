/*
 * Task #5:
 * WAP in CPP to illustrate the concept of constructor and destructor invocation in multiple inheritance.
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

class B{
    public:
        B(){
            cout << "Invoked constructor of base class B!!" << endl;
        }

        ~B(){
            cout << "Invoked destructor of base class B!!" << endl;
        }
};

class C : public A, public B{
    public:
        C(){
            cout << "Invoked constructor of derived class C!!!" << endl;
        }

        ~C(){
            cout << "Invoked destructor of derived class C!!!" << endl;
        }
};

int main(){
    C obj;

    return 0;
}