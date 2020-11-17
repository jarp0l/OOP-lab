#pragma once
#include <iostream>

class Distance {
    public:
        Distance();
        ~Distance();
        void getDistance();
        void printDistance();
        void convert();

    private:
        const float m_MTF = 3.28084f;   // 1 meter = 3.28084 ft
        int m_ft;   // for distance in feet
        float m_in; // for distance in inches
        float m_mtr;    // for distance in meters
};