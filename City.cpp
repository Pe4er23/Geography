#include "City.h"
#include <array>
#include <iostream>
City::City() {}
int City::ID = 0;
City::City(std::string name, double x, double y) {
    setName(name);
    coord.x = x;
    coord.y = y;
    ID++;
    id = ID;
}

City::City(std::string name, double x, double y, bool cap) {
    setName(name);
    coord.x = x;
    coord.y = y;
    isCapital = cap;
}

const std::array<double, 2> City::getCoords() {
    return { coord.x, coord.y };
}

void City::setName(std::string name) {
    this->name = name;
}

const bool City::isCityCapital() {
    return isCapital;
}

void City::makeCapital(bool cap) {
    isCapital = cap;
}
void City::printAll() {
    std::cout << name << ": " << coord.x << " " << coord.y << std::endl;
}

const int City::getId() {
    return id;
}

std::string City::getName() {
    return name;
}

