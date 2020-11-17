#pragma once
#include "includes.hpp"

class Cartesian {

    public:
        Cartesian();
        Cartesian(float, float);
        ~Cartesian();
        void printData();
        float return_x();
        float return_y();

    private:
        float x;
        float y;
};