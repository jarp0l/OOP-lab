#include "Polar.hpp"

Polar::Polar() : r{0.0}, theta{0.0}{
}

Polar::Polar(float t_r, float t_theta){
    r = t_r;
    theta = t_theta;
}

Polar::~Polar(){   
}

void Polar::printData(){
    std::cout << "Coordinates in Polar form (r, theta): (" << r << ", " << theta << ")" << std::endl;
}