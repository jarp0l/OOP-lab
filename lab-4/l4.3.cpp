/*
 * Task #3:
 * WAP in CPP to convert the co-ordinates from Cartesian system to polar system using the concept of
 * user defined to user defined conversion by writing conversion routine in source class.
 *  i.e. using operator function
 */


#include <iostream>
#include <cmath>

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



int main(){
    
    Polar *polar = new Polar;
    Cartesian *cartesian = new Cartesian;

    *cartesian = Cartesian(3, 4);   //(x, y)

    *polar = *cartesian;

    cartesian->printData();
    polar->printData();


    delete polar;
    delete cartesian;

    return 0;
}
