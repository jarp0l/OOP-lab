#include "Polar.hpp"

Polar::Polar() : r{0.0}, theta{0.0}{
}

Polar::Polar(Cartesian c){
    r = sqrt(pow(c.return_x(), 2) + pow(c.return_y(), 2));
    theta = atan(c.return_x() / c.return_y());
}

Polar::~Polar(){   
}

void Polar::printData(){
    std::cout << "Coordinates in Polar form (r, theta): (" << r << ", " << theta << ")" << std::endl;
}