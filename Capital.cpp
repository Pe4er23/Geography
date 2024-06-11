#include <iostream>
#include <string>
#include "Capital.h"
#include "City.h"
Capital::Capital() {}
void Capital::createCapital(std::string name, double x, double y,int id) {
    City::setName(name);
    coord.x = x;
    coord.y = y;
    this->id = id;
}
void Capital::removeCapital() {
    this->id = 0;
}
