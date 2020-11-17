/*
 * Task #3:
 * WAP in CPP to convert the co-ordinates from Cartesian system to polar system using the concept of
 * user defined to user defined conversion by writing conversion routine in source class.
 *  i.e. using operator function
 */

#include "Polar.hpp"
#include "Cartesian.hpp"

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