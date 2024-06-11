#ifndef CITY_H
#define CITY_H

#include <iostream>
#include <string>
#include "Coords.h"
#include <array>

class City {
private:
    static int ID;
    int id = 0;
    std::string name;
public:
    bool isCapital = false;
    Coords coord;
    City();
    City(std::string name, double x, double y);
    City(std::string name, double x, double y, bool cap);
    const std::array<double, 2> getCoords();
    void setName(std::string name);
    const bool isCityCapital();
    void makeCapital(bool cap);
    void printAll();
    const int getId();
    std::string getName();
    friend class Capital;
};
#endif // CITY_H
