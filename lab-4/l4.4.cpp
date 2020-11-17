/*
 * Task #4: 
 * WAP in CPP to convert the co-ordinates from Cartesian system to polar system using the concept of
 * user defined to user defined conversion by writing conversion routine in destination class.
 * i.e. using parameterized constructor
 */

#include <iostream>
#include <cmath>


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
