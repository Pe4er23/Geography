#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <vector>
#include <array>
#include "Continent.h"
#include "Coords.h"


class Map {
private:
public:
    std::vector<Continent> cont;
    Map();
    void addNewContinent(std::string name, std::string square);
    size_t getCountOfConts();
    void printAll();
    void printCityByCoords(double x, double y);
    void printAllCntnts();
    void printEmpty();
};

#endif // MAP_H
