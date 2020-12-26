/* Task #3:
* WAP in CPP to illustrate the concept of multipath inheritance and virtual base class using following
* diagram.
*                                          student
*                         |-----------------| . |-------------------|
 *                     internal               .                 external
*                         |_________________ .  ___________________|     
*                                          | . |
*                                          result
*/

#include <iostream>
#include <iomanip>

using namespace std;

class Student{
    protected:
        void getStudentInfo();
        void printStudentInfo();

    protected:
        char name[20];
        char rollNum[10];
};

class Internal : virtual public Student{
    protected:
        void getIntMarks();
        void printIntMarks();

    protected:
        float IntMarks[3];
};

class External : virtual public Student{
    protected:
        void getExtMarks();
        void printExtMarks();

    protected:
        float ExtMarks[3];
};
class Result : public Internal, public External{
    public:
        void getStudentDetails();
        void printResult();

    private:
        void calcTotal();
        void calcPercentage();

    private:
        float totalMarks = 0.f;
        float percentage = 0.f;
};



int main(){
    Result studentA;

    studentA.getStudentDetails();
    studentA.printResult();

    return 0;
}



void Student::getStudentInfo(){
    cout << "Name: ";
    cin >> name;

    cout << "Roll No.: ";
    cin >> rollNum;
}

void Internal::getIntMarks(){
    cout << "\nEnter internal marks of 3 subjects: ";
    cin >> IntMarks[0]
        >> IntMarks[1]
        >> IntMarks[2];
}

void External::getExtMarks(){
    cout << "\nEnter external marks of 3 subjects: ";
    cin >> ExtMarks[0]
        >> ExtMarks[1]
        >> ExtMarks[2];
}

void Result::getStudentDetails(){
    getStudentInfo();
    getIntMarks();
    getExtMarks();

    calcTotal();
    calcPercentage();
}

void Result::calcTotal(){
    for (int i = 0; i < 3; i++){
        totalMarks += IntMarks[i] + ExtMarks[i];
    }
}

void Result::calcPercentage(){
    percentage = totalMarks/6;
}



void Student::printStudentInfo(){
    cout << "Name: " << name << endl;
    cout << "Roll No.: " << rollNum << endl;
}

void Internal::printIntMarks(){
    cout << "Internal marks: "
         << IntMarks[0] << " | "
         << IntMarks[1] << " | "
         << IntMarks[2] << endl;
}

void External::printExtMarks(){
    cout << "External marks: "
         << ExtMarks[0] << " | "
         << ExtMarks[1] << " | "
         << ExtMarks[2] << endl;
}

void Result::printResult(){
    cout << "\n----\n\nResult::" << endl;
    printStudentInfo();
    printIntMarks();
    printExtMarks();

    cout << "Total marks: " << totalMarks << endl;
    cout << "Percentage: " << setprecision(5) << percentage << " %" << endl;
}