#include "Cartesian.hpp"

Cartesian::Cartesian() : x{0.0}, y{0.0}{
}

Cartesian::Cartesian(float t_x, float t_y){
    x = t_x;
    y = t_y;
}

Cartesian::~Cartesian(){
}

Cartesian::operator Polar(){

    float t_r, t_theta;

    t_r = sqrt(pow(x, 2) + pow(y, 2));
    t_theta = atan(y / x);
 
    return Polar(t_r, t_theta);
}

void Cartesian::printData(){
    std::cout << "\nCoordinates in Cartesian form (x, y): (" << x << ", " << y << ")" << std::endl;
}