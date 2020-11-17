#pragma once
#include "includes.hpp"
#include "Polar.hpp"

class Cartesian {

    public:
        Cartesian();
        Cartesian(float, float);
        ~Cartesian();
        operator Polar();
        void printData();

    private:
        float x;
        float y;
};