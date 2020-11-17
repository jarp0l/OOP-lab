/*
 * Task #2:
 * Write a program in CPP to convert the distance in feet and inch entered by the user 
 * into distance in meters using the concept of user defined to basic data conversion.
 */

#include <iostream>

class Distance {
    public:
        Distance();
        ~Distance();
        void getDistance();
        void printDistance();
        void convert(Distance *);
        operator float();

    private:
        const float m_MTF = 3.28084f;   // 1 meter = 3.28084 ft
        int m_ft;   // for distance in feet
        float m_in; // for distance in inches
        float m_mtr;    // for distance in meters
};




Distance::Distance() : m_ft{0}, m_in{0.0}, m_mtr{0.0}{
}

Distance::~Distance(){
}

void Distance::getDistance(){
    std::cout << "Enter distance in feet and inches: ";
    std::cin >> m_ft >> m_in;
    std::cout << std::endl;
}

void Distance::printDistance(){
    std::cout << "Output: " << m_mtr << " m" << std::endl;
}

void Distance::convert(Distance *dist){

    m_mtr = static_cast<float>(*dist);
    // or
    // m_mtr = *dist;
}

Distance::operator float(){

    float ft_to_mtr; // for feet to meter conversion

    ft_to_mtr = m_in/12;    // convert inches to feet
    ft_to_mtr += float(m_ft);   // add distance in feet to the above calculated value of feet
                                // float(m_ft) connverts feet which is in integer to float type
    return ft_to_mtr/m_MTF;     // convert dist in feet to meters and return the dist in meters
}




int main(){
    Distance *distance = new Distance;

    distance->getDistance();
    distance->convert(distance);
    distance->printDistance();

    delete distance;

    return 0;
}
