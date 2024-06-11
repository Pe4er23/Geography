#include "Country.h"

Country::Country() {}
Country::Country(std::string name, std::string square, std::string nameCity, double squareCity, double x, double y) {
    setName(name);
    addCity(nameCity, x, y);
}

Country::Country(std::string name, std::string square) {
    setName(name);
    setSquare(square);
}

void Country::setName(std::string name) {
    this->name = name;
}

void Country::setSquare(std::string sq) {
    square = sq;
}

void Country::addCity(std::string name, double x, double y) {
    city.push_back(City(name, x, y));
}

void Country::makeCityCapital(int num) {
    for (size_t i = 0; i < city.size(); i++) {
        if (city[i].isCityCapital()) {
            std::cerr << "This country already has capital.";
            return;
        }
    }
    city[num].makeCapital(1);
    std::array<double,2> cord = city[num].getCoords();
    addCapital(city[num].getName(), cord[0], cord[1],city[num].getId());
}
void Country::removeCityCapital() {
    for (size_t i = 0; i < city.size(); i++) {
        if (city[i].isCityCapital()) {
            city[i].makeCapital(false);
            capital.removeCapital();
            return;
        }
    }
    std::cerr << "This country doesn't have capital.";
}

void Country::addCapital(std::string name, double x, double y,int id) {
    capital.createCapital(name, x, y, id);
}

void Country::printAll() {
    std::cout << name << " " << square << ":\n";
    if (capital.getId() != 0) {
        std::cout << "\t\tCapital: ";
        capital.printAll();
    }
    for (auto& ct : city) {
        std::cout << "\t\t";
        ct.printAll();
    }
}

void Country::printAllCts() {
    for (size_t i = 0; i < city.size(); i++) {
        std::cout << i + 1 << ": " << city[i].getName() << "  " << city[i].getCoords()[0] << "  " << city[i].getCoords()[1] << "\n";
    }
    std::cout << std::endl;
}

size_t Country::getNumOfCities() {
    return city.size();
}

std::string Country::getName() {
    return name;
}

std::string Country::getSquare() {
    return square;
}
