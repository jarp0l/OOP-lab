#pragma once

#include <iostream>
#include <fstream>

const std::string FILEPATH = "./students.txt";

class Student {
    public:
        void addRecords(Student *s);
        void printRecords(Student *s);

        void updateRecord(Student *s);
        void searchRecord(Student *s);
        void modifyRecord(Student *s);
        void deleteRecord();

        void getFileInfo(Student *s);
    
    private:
        inline void getARecord();
        inline void printARecord();
    
    private:
        char name[20];
        char address[25];
        int roll;
        float marks;
};









