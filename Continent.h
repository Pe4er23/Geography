#ifndef CONTINENT_H
#define CONTINENT_H

#include <string>
#include <vector>
#include "Country.h"
class Continent {
private:
    std::string name;
    std::string square;

public:
    std::vector<Country> country;
    Continent();
    Continent(std::string name, std::string square);
    void setName(std::string name);
    void setSquare(std::string square);
    size_t getNumOfCountries();
    void addCountry(std::string name, std::string square);
    void printAll();
    void printAllCntrs();
    std::string getName();
    std::string getSquare();
};

#endif // CONTINENT_H
