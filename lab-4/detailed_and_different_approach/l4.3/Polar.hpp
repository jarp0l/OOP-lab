#pragma once
#include "includes.hpp"

class Polar {

    public:
        Polar();
        Polar(float, float);
        ~Polar();
        void printData();

    private:
        float r;
        float theta;
};