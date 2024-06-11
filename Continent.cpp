#include "Continent.h"
#include <iostream>
Continent::Continent() {}
Continent::Continent(std::string name, std::string square) {
    setName(name);
    setSquare(square);
}

void Continent::setName(std::string name) {
    this->name = name;
}

void Continent::setSquare(std::string square) {
    this->square = square;
}

size_t Continent::getNumOfCountries() {
    return country.size();
}

void Continent::addCountry(std::string name, std::string square) {
    country.push_back(Country(name, square));
}

void Continent::printAll() {
    std::cout << name << " " << square << ":\n";
    for (size_t i = 0; i < country.size(); i++) {
        std::cout << "\t";
        country[i].printAll();
    }
}

void Continent::printAllCntrs() {
    for (size_t i = 0; i < country.size(); i++) {
        std::cout << i + 1 << ": " << country[i].getName() << "  " << country[i].getSquare() << "\n";
    }
}

std::string Continent::getName() {
    return name;
}

std::string Continent::getSquare() {
    return square;
}
