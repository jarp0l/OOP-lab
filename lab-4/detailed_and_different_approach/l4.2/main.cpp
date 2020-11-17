/*
 * Task #2:
 * Write a program in CPP to convert the distance in feet and inch entered by the user 
 * into distance in meters using the concept of user defined to basic data conversion.
 */

#include "Distance.hpp"

int main(){
    Distance *distance = new Distance;

    distance->getDistance();
    distance->convert(distance);
    distance->printDistance();

    delete distance;

    return 0;
}