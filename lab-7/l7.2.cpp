/* Task #3:
 * WAP in CPP to illustrate the concept of typeid operator.
 */

#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

class Student {
    public:
        string name;
        int rollNum;
        float marks;
};

class ClassRepresentative : public Student {
    public:
        unsigned *contactNum;
};

int main(){
    Student *s1 = new Student;
    ClassRepresentative s2;
    
    cout << "typeid(s1) : " << typeid(s1).name() << endl;
    cout << "typeid(s1->name) : " << typeid(s1->name).name() << endl;
    cout << "typeid(s1->rollNum) : " << typeid(s1->rollNum).name() << endl;
    cout << "typeid(s1->marks) : " << typeid(s1->marks).name() << endl;

    cout << endl;

    cout << "typeid(s2) : " << typeid(s2).name() << endl;
    cout << "typeid(s2.name) : " << typeid(s2.name).name() << endl;
    cout << "typeid(s2.rollNum) : " << typeid(s2.rollNum).name() << endl;
    cout << "typeid(s2.marks) : " << typeid(s2.marks).name() << endl;
    cout << "typeid(s2.contactNum) : " << typeid(s2.contactNum).name() << endl;

    return 0;
}