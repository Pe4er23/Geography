#include "Map.h"
#include <iostream>
#include <array>

Map::Map() {}

void Map::addNewContinent(std::string name, std::string square) {
    cont.push_back(Continent(name, square));
}

size_t Map::getCountOfConts() {
    return cont.size();
}

void Map::printAll() {
    if (cont.empty()) {
        printEmpty();
    }
    else {
        for (auto& continent : cont) {
            continent.printAll();
            std::cout << std::endl;
        }
    }
}

void Map::printCityByCoords(double x, double y) {
    if (cont.empty()) {
        printEmpty();
    }
    else {
         for (auto& continent : cont) {
            for (auto& country : continent.country) {
                for (auto& city : country.city) {
                    auto cord = city.getCoords();
                    if (cord[0] == x && cord[1] == y) {
                        std::cout << "This city is: " << city.getName() << std::endl;
                        return;
                    }
                }
            }
         }
         std::system("cls");
         std::cerr << "Wrong coordinates.\n";
    }
}
void Map::printAllCntnts() {
    for (size_t i = 0; i < cont.size(); i++) {
        std::cout << i + 1 << ": " << cont[i].getName() << "  " << cont[i].getSquare() << "\n";
    }
}

void Map::printEmpty() {
    std::cout << "Your map is empty.\n";
}
