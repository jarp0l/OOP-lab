#include "Distance.hpp"

Distance::Distance() : m_ft{0}, m_in{0.0}, m_mtr{0.0}{
}

Distance::~Distance(){
}

void Distance::getDistance(){
    std::cout << "Enter distance in meters: ";
    std::cin >> m_mtr;
    std::cout << std::endl;
}

void Distance::printDistance(){
    std::cout << "Output: " << m_ft << " ft " << m_in << " in " << std::endl;
}

void Distance::convert(){
    // first convert meters to feet
    // then take integer part of the converted feet which is the distance in feet we need
    // then the remaining decimal part is the inch part after multiplying by 12 to convert from feet

    float mtr_to_ft; // for meters to feet conversion

    mtr_to_ft = m_MTF * m_mtr;
    m_ft = int(mtr_to_ft);
    m_in = 12 * (mtr_to_ft - m_ft);
}