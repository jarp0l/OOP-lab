/*
 * Task #1:
 * WAP in CPP to illustrate the concept of single inheritance using following diagram.
 *                                 student
 *                                     |
 *                                     |
 *                                  leader
 */

#include <iostream>
#include <string>

using namespace std;

class Student{
    public:
        void getStudentInfo();
        void printStudentInfo();

    protected:
        string m_name;
        string m_rollNum;
        string m_faculty;
        unsigned m_id;
};

class Leader : public Student{
    public:
        void getLeaderInfo();
        void printLeaderInfo();

    private:
        bool m_leaderBadgeReceived;
        unsigned m_contactNum;
};

void Student::getStudentInfo(){
    cout << "Name: ";
    getline(cin, m_name);

    cout << "Roll No.: ";
    cin >> m_rollNum;

    cout << "Faculty Code: ";
    cin >> m_faculty;

    cout << "Id: ";
    cin >> m_id;
}

void Leader::getLeaderInfo(){
    string tmp;
    cout << "Leader badge received?(Y/N): ";
    cin >> tmp;

    try{
        if (tmp == "y" || tmp == "Y"){
            m_leaderBadgeReceived = true;
        }
        else if (tmp == "n" || tmp == "N"){
            m_leaderBadgeReceived = false;
        }
        else{
            throw "Check your input and enter again";
        }
    }
    catch(const char* err){
        cerr << err << endl;
        exit(-1);
    }

    cout << "Contact No.: ";
    cin >> m_contactNum;
}

void Student::printStudentInfo(){
    cout << "Name: " << m_name << endl
         << "Roll No.: " << m_rollNum << endl
         << "Faculty Code: " << m_faculty << endl
         << "Id: " << m_id << endl;
}

void Leader::printLeaderInfo(){
    if (m_leaderBadgeReceived == 1){
        cout << "Leader badge received?(Y/N): Yes" << endl;
    }
    else{
        cout << "Leader badge received?(Y/N): No" << endl;
    }
    cout << "Contact No.: " << m_contactNum << endl;
}

int main(){
    Leader A;

    cout << "Enter details of leader A: " << endl;
    A.getStudentInfo();
    A.getLeaderInfo();

    cout << endl << endl << endl;

    cout << "Details of leader A: " << endl;
    A.printStudentInfo();
    A.printLeaderInfo();
    
    return 0;
}