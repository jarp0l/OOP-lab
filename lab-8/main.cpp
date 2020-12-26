#include <iostream>

#include "Student.hpp"

using namespace std;

class Menu {
    public:
        void showMenu();
        void getInput(Student *s);
};

int main(){
    Menu *menu = new Menu;
    Student *s = new Student;

    while (1){
        menu->showMenu();
        menu->getInput(s);
    }

    delete menu;
    delete s;
    
    return 0;
}



void Menu::showMenu(){
    std::cout << "\n\t::Menu:: " << std::endl;
    std::cout << "Press the corresponding key:: " << std::endl;
    std::cout << "\t[ 1 ]. Add records" << std::endl;
    std::cout << "\t[ 2 ]. Print records" << std::endl;
    std::cout << "\t[ 3 ]. Update a record" << std::endl;
    std::cout << "\t[ 4 ]. Search a record" << std::endl;
    std::cout << "\t[ 5 ]. Modify a record" << std::endl;
    std::cout << "\t[ 6 ]. Delete a record" << std::endl;
    std::cout << "\t[ 7 ]. Compute the no. of records and total file size" << std::endl;
    std::cout << "\t[ 0 ]. Exit" << std::endl;

    std::cout << "\nYour input => ";
}

void Menu::getInput(Student *s){
    short int input;

    std::cin >> input;

    std::cout << std::endl;

    switch(input){
        case 1:
            s->addRecords(s);
            break;

        case 2:
            s->printRecords(s);
            break;

        case 3:
            s->updateRecord(s);
            break;

        case 4:
            s->searchRecord(s);
            break;

        case 5:
            s->modifyRecord(s);
            break;

        case 6:
            s->deleteRecord();
            break;

        case 7:
            s->getFileInfo(s);
            break;

        case 0:
            exit(1);
        
        default:
            std::cout << "\nCheck your input and try again." << std::endl;
    }
}









