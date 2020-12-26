/* Task #2:
 * WAP in CPP to illustrate the concept of dynamic_cast operator.
 */

#include <iostream>

using namespace std;

class A {
    public:
        virtual void dummy(){}
};

class B : public A {
    //...
};

int main(){
    A *APtr = new A;
    B *BPtr = new B;
    B *tmpPtr = BPtr;

    BPtr = dynamic_cast< B * > (APtr);

    if (BPtr != tmpPtr){
        cout << "Casting successful!" << endl;
    }
    else {
        cout << "Casting unsuccessful!" << endl;
    }

    delete APtr;
    delete BPtr;
    
    return 0;
}