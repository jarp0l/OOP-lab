#include "Cartesian.hpp"

Cartesian::Cartesian() : x{0.0}, y{0.0}{
}

Cartesian::Cartesian(float t_x, float t_y){
    x = t_x;
    y = t_y;
}

Cartesian::~Cartesian(){
}

float Cartesian::return_x(){
    return x;
}

float Cartesian::return_y(){
    return y;
}

void Cartesian::printData(){
    std::cout << "\nCoordinates in Cartesian form (x, y): (" << x << ", " << y << ")" << std::endl;
}