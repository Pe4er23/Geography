#ifndef COUNTRY_H
#define COUNTRY_H

#include <iostream>
#include <string>
#include <vector>
#include "City.h"
#include "Capital.h"

class Country {
private:
    std::string name;
    std::string square;
public:
    Capital capital;
    std::vector<City> city;
    Country();
    Country(std::string name, std::string square, std::string nameCity, double squareCity, double x, double y);
    Country(std::string name, std::string square);
    void setName(std::string name);
    void setSquare(std::string sq);
    void addCity(std::string name, double x, double y);
    void makeCityCapital(int num);
    void addCapital(std::string name, double x, double y,int id);
    void removeCityCapital();
    void printAll();
    void printAllCts();
    size_t getNumOfCities();
    std::string getName();
    std::string getSquare();
};

#endif // COUNTRY_H
