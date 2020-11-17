#pragma once
#include "includes.hpp"
#include "Cartesian.hpp"

class Polar {

    public:
        Polar();
        Polar(Cartesian);
        ~Polar();
        void printData();

    private:
        float r;
        float theta;
};