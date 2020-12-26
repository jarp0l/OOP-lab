/* Task #2:
 * WAP in CPP to illustrate the concept of multiple inheritance using following diagram.
 *                                 student   employee
 *                                      |   |
 *                                     officer
 */

#include <iostream>

using namespace std;

class Student {
    protected:
        void getStudentInfo();
        void printStudentInfo();

    protected:
        char name[20];
        char address[30];
};

class Employee {
    protected:
        void getEmployeeInfo();
        void printEmployeeInfo();

    protected:
        char orgName[25];
        unsigned id;
};

class Officer : public Student, public Employee {
    public:
        void getDetails();
        void printDetails();

    private:
        void getOfficerInfo();
        void printOfficerInfo();

    private:
        int workHr;
};


int main(){
    Officer x;
    
    x.getDetails();
    x.printDetails();

    return 0;
}


void Student::getStudentInfo(){
    cout << "Name: ";
    cin >> name;

    cout << "Address: ";
    cin >> address;
}

void Employee::getEmployeeInfo(){
    cout << "Organization name: ";
    cin >> orgName;

    cout << "Id: ";
    cin >> id;
}

void Officer::getOfficerInfo(){
    cout << "Working hour: ";
    cin >> workHr;
}



void Student::printStudentInfo(){
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
}

void Employee::printEmployeeInfo(){
    cout << "Organization name: " << orgName << endl;
    cout << "Id: " << id << endl;
}

void Officer::printOfficerInfo(){
    cout << "Working hour: " << workHr << endl;
}

void Officer::getDetails(){
    cout << "Enter details:: " << endl;
    getStudentInfo();
    getEmployeeInfo();
    getOfficerInfo();
}

void Officer::printDetails(){
    cout << "\nDetails:: " << endl;
    printStudentInfo();
    printEmployeeInfo();
    printOfficerInfo();
}