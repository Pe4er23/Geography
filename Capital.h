#ifndef CAPITAL_H
#define CAPITAL_H
#include "City.h"
class Capital : public City {
public:
    Capital();
    Capital(std::string name, double x, double y) : City(name, x, y) {};
    void createCapital(std::string name, double x, double y,int id);
    void removeCapital();
    friend class City;
};
#endif 
