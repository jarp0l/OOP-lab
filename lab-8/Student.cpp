#include "Student.hpp"

inline void Student::getARecord(){
    std::cout << "\tName: ";
    std::cin >> name;
    
    std::cout << "\tAddress: ";
    std::cin >> address;
    
    std::cout << "\tRoll no.: ";
    std::cin >> roll;
    
    std::cout << "\tMarks: ";
    std::cin >> marks;
}

inline void Student::printARecord(){
    std::cout << "\tName: " << name << std::endl;
    std::cout << "\tAddress: " << address << std::endl;
    std::cout << "\tRoll no.: " << roll << std::endl;
    std::cout << "\tMarks: " << marks << std::endl;
}

void Student::addRecords(Student *s){
    int n;
    std::cout << "How many records do you want to add?\n=> ";
    std::cin >> n;

    std::ofstream file(FILEPATH, std::ios::out);

    for(int i = 1; i <= n; i++){
        std::cout << "\nFor student " << i << ": " << std::endl;
        getARecord();

        file.write((char *) s, sizeof(*s));
    }
    file.close();
    std::cout << "Records successfully added." << std::endl;
}

void Student::printRecords(Student *s){
    std::ifstream file(FILEPATH, std::ios::in);

    while (file.read((char *) s, sizeof(*s))){
        printARecord();
        std::cout << std::endl;
    }

    file.close();
}

void Student::updateRecord(Student *s){
    std::ofstream file(FILEPATH, std::ios::app);
    
    std::cout << "\nAdd new record :" << std::endl;
    getARecord();

    file.write((char *) s, sizeof(*s));

    file.close();
    std::cout << "1 record successfully added." << std::endl;
}

void Student::searchRecord(Student *s){
    int p_roll;
    bool isFound = false;

    std::cout << "Enter the roll number to search:\n=> ";
    std::cin >> p_roll;

    std::ifstream file(FILEPATH, std::ios::in);
    file.seekg(0, std::ios::beg);

    while (file.read((char *) s, sizeof(*s))){
        if (this->roll == p_roll){
            std::cout << "Matching record found! Details:" << std::endl;    
            printARecord();
            isFound = true;
            break;
        }
    }
    file.close();

    if (!isFound){
        std::cout << "Matching record not found!" << std::endl;
    }
}

void Student::modifyRecord(Student *s){
    int p_roll;
    bool isFound = false;
    int recordLocation = 0;
    int objectCounter = 0;

    std::cout << "Enter the roll number to modify its record:\n=> ";
    std::cin >> p_roll;

    std::fstream file(FILEPATH, std::ios::in | std::ios::out | std::ios::ate);
    file.seekg(0, std::ios::beg);

    while (file.read((char *) s, sizeof(*s))){
        objectCounter++;

        if (this->roll == p_roll){
            recordLocation = (objectCounter - 1) * sizeof(*s);
            file.seekp(recordLocation, std::ios::beg);

            std::cout << "Matching record found! Enter new details:" << std::endl;  
            getARecord();

            file.write((char *) s, sizeof(*s)) << std::flush;
            std::cout << "Record modified successfully!";
            
            isFound = true;
            break;
        }
    }
    file.close();

    if (!isFound){
        std::cout << "Matching record not found!" << std::endl;
    }
}

void Student::deleteRecord(){
    int p_roll;
    int n = 0;
    Student studentArr[48];
    bool isFound = true;

    std::cout << "Enter the roll number to delete its record:\n=> ";
    std::cin >> p_roll;

    std::ifstream ifile(FILEPATH, std::ios::in);

    ifile.seekg(0, std::ios::beg);

    while (ifile.read((char *) &studentArr[n], sizeof(studentArr[n]))){
        n++;
    }
    ifile.close();

    std::ofstream ofile(FILEPATH, std::ios::out);

    for (int i = 0; i < n; i++){
        if (studentArr[i].roll != p_roll){
            ofile.write((char *) &studentArr[i], sizeof(studentArr[i]));

            if (isFound){
                isFound = false;
            }
        }
        else{
            isFound = true;
        }
    }
    ofile.close();
    
    if (isFound){
        std::cout << "Matching record deleted successfully!" << std::endl;
    }
    else if (!isFound){
        std::cout << "No matching record found!" << std::endl;
    }
}

void Student::getFileInfo(Student *s){
    int fileSize = 0;
    std::streampos begin, end;
    
    std::ifstream file(FILEPATH, std::ios::in);

    begin = file.tellg();
    file.seekg(0, std::ios::end);
    end = file.tellg();
    fileSize = end - begin;

    std::cout << "No. of records: " << fileSize/sizeof(*s) << std::endl;
    std::cout << "Total size of file: " << fileSize << " bytes" << std::endl;
}