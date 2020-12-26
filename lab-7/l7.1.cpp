/* Task #4:
 * WAP in CPP to illustrate the concept of virtual functions.
 */

#include <iostream>

using namespace std;

class Base {
    public:
        virtual void dummy(){
            cout << "Inside dummy() function of Base class!" << endl;
        };
};

class Derived : public Base {
    public:
        void dummy(){
            cout << "Inside dummy() function of Derived class!" << endl;
        };
};

int main(){
    Base *bptr;
    Derived d1;
    
    bptr = &d1;
    bptr->dummy();

    return 0;
}