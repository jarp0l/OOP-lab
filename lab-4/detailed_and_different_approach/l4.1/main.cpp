/*
 * Task #1:
 * Write a program in CPP to convert the distance in meters entered by the user into 
 * distance in feet and inch using the concept of basic to user defined data conversion.
 */

#include "Distance.hpp"

int main(){
    Distance *distance = new Distance;

    distance->getDistance();
    distance->convert();
    distance->printDistance();

    delete distance;

    return 0;
}