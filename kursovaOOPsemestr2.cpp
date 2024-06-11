#include <iostream>
#include <vector>
#include <string>
#include "Map.h"
#include "Continent.h"
#include "City.h"
#include "Capital.h"
#include "Country.h"
#include "Create.h"
using namespace std;
void printComands() {
    std::cout << "Commands:\n1. Print City by coordinates;\n2. Add Continent;\n3. Add City;\n4. Add Country;\n5. Make city capital;\n6 Remove capital;\n7 Print all map;\n8. Stop.\nAnswer: ";
}
bool checkForRightName(string name) {
    string empty = " ";
    if (name[0] == empty[0] || name[1] == empty[0]) {
        return 0;
    }
    else { 
        system("cls");
        cerr << "\nWrong name.";
        return 1; } 
}
bool checkSquare(string square) {
    double sq = stod(square);
    if (sq < 100 || sq > 18000000) {
        cerr << "\nWrong number.";
        return 0;
    }
    else { return 1; }
}
Map newMap;

void Interface() {
    int comnum = 0;
    string comstr;
    while (comnum != 8) {
        printComands();
        cin >> comnum;
        if (comnum == 1) {
            double coord[2];
            std::cout << "\nType x: ";
            cin >> coord[0];
            std::cout << "\nType y: ";
            cin >> coord[1];
            newMap.printCityByCoords(coord[0], coord[1]);
        }

        else if (comnum == 2) {
            if (newMap.cont.size() == 0) {
                system("cls");
                cout << "\nThere is no continents.\n";
                Interface();
            }
            std::string name;
            std::string square;
            bool check = 0;
            while (check != 1) {
                std::cout << "Type name if you want continue or 'BACK' if you want to go back: ";
                cin >> comstr;
                if (comstr == "BACK") {
                    Interface();
                }
                check = checkForRightName(comstr);
                system("cls");
                if (check == 0) {
                    cerr << "Wrong name;\n";
                }
                else {
                    for (auto& cont : newMap.cont) {
                        if (cont.getName() == comstr) {
                            cerr << "\nThis name has already been taken.\n";
                            check = false;
                            break;
                        }
                    }
                }
            }
            name = comstr;
            check = 0;
            while (check != 1) {
                std::cout << "Type square if you want continue or 'BACK' if you want to go back: ";
                cin >> comstr;
                if (comstr == "BACK") {
                    Interface();
                }
                check = checkSquare(comstr);
                system("cls");
                
                if (check == 0) {
                    cerr << "Wrong square;\n";
                }
            }
            square = comstr;
            newMap.addNewContinent(name, square);
            
        }

        else if (comnum == 3) {
            if (newMap.cont.size() == 0) {
                system("cls");
                cout << "\nThere is no continents.\n";
                Interface();
            }
            bool check = false;
            int numcntnt;
            cin >> numcntnt;
            while (check != true) {
                std::cout << "Choose continent from 1 to " << newMap.getCountOfConts() + 1 << ", or 0 to go back:\n";
                newMap.printAllCntnts();
                std::cout << "Answer: ";
                cin >> numcntnt;
                if (numcntnt == 0) {
                    system("cls");
                    Interface();
                }
                else if(numcntnt < newMap.getCountOfConts() && numcntnt >= 1 ) {
                    check = true;
                    
                }
                else {
                    cerr << "\nWrong number.";
                }
            }
            check = 0;
            numcntnt--;
            int numctr = 0;
            while (check != true) {
                std::cout << "Choose country from 1 to" << newMap.cont[numcntnt].getNumOfCountries() + 1 << ", or 0 to go back:\n";
                newMap.cont[numcntnt].printAllCntrs();
                std::cout << "Answer: ";
                cin >> numctr;
                if (numctr == 0) {
                    system("cls");
                    Interface();
                }
                else if (numctr < newMap.cont[numcntnt].getNumOfCountries() && numctr >= 1) {
                    check = true;
                }
                else {
                    cerr << "\nWrong number.\n";
                    system("cls");
                }
            }
            numctr--;
            check = false;
            while (check != true) {
                std::string namect;
                std::cout << "Type a name of city or 'BACK': "; // проверка команды на возвращение назад
                cin >> comstr;
                if (comstr == "BACK") {
                    system("cls");
                    Interface();
                }
                check = checkForRightName(comstr);
                std::cout << "Type name if you want continue or 'BACK' if you want to go back: ";
                cin >> comstr;
                if (comstr == "BACK") {
                    Interface();
                }
                check = checkForRightName(comstr);
                system("cls");
                if (check == 0) {
                    cerr << "Wrong name;\n";
                }
                else {
                    for (auto& cont : newMap.cont[numcntnt].country[numctr].city) {
                        if (cont.getName() == comstr) {
                            cerr << "\nThis name has already been taken.\n";
                            check = false;
                            break;
                        }
                    }
                }
            }
            std::cout << "Type a coords for city:\n";
            double x, y;
            cin >> x;
            std::cout << endl;
            cin >> y;
            if (!x || !y) {
                system("cls");
                cout << "\nWrong coordinates.\n";
                Interface();
            }
            for (int i = 0; i < newMap.cont[numcntnt].country[numctr].getNumOfCities();i++) {
                array<double,2> c = {x,y};
                if (newMap.cont[numcntnt].country[numctr].city[i].getCoords() == c) {
                    system("cls");
                    cerr << "You already have city with this coords.";
                    Interface();
                }
            }
            newMap.cont[numcntnt].country[numctr].addCity(comstr, x, y);
        }
        
        else if (comnum == 4) {
            if (newMap.cont.size() == 0) {
                system("cls");
                cout << "\nThere is no continents.\n";
                Interface();
            }
            bool check = false;
            int numcntnt;
            while (check != true) {
                std::cout << "Choose continent or type '0' to go back:\n";
                newMap.printAllCntnts();
                std::cout << "Answer:";
                cin >> numcntnt;
                if (numcntnt == 0) {
                    Interface();
                }
                else if (numcntnt <= newMap.getCountOfConts() && numcntnt >= 1) {
                    check = true;

                }
                else {
                    system("cls");
                    cerr << "\nWrong number.";
                }
            }
            check = 0;
            numcntnt--;
            int numctr;
            while (check != true) {
                std::cout << "Choose country:\n";
                newMap.cont[numcntnt].printAllCntrs();
                std::cout << "Answer:";
                cin >> numctr;
                if (numctr == -1) {
                    system("cls");
                    Interface();
                }
                else if (numctr <= newMap.cont[numcntnt].getNumOfCountries() && numctr >= 1) {
                    check = true;
                }
                else {
                    system("cls");
                    cerr << "\nWrong number.";
                }
            }
            numctr--;
            int id;
            check = false;
            while (check != true) {
                cout << "\nType number of city that you want to make capital or type 0 to go back:\n";
                newMap.cont[numcntnt].country[numctr].printAllCts();
                cout << "\nAnswer: ";
                cin >> id;
                if (id == 0) {
                    system("cls");
                    Interface();
                }
                else if (id <= newMap.cont[numcntnt].country[numctr].getNumOfCities() && id >= 1) {
                    check = true;
                        
                }
                else {
                    system("cls");
                    cout << "\nWrong number;";
                }
            }
            newMap.cont[numcntnt].country[numctr].makeCityCapital(id - 1); 
        }
        else if (comnum == 5) {
            if (newMap.cont.size() == 0) {
                system("cls");
                cout << "\nThere is no continents.\n";
                Interface();
            }
            bool check = 0;
            int numcntnt;
            while (check != 1) {
                std::cout << "Choose continent or type '0' to go back:\n";
                newMap.printAllCntnts();
                std::cout << "Answer:";
                cin >> numcntnt;
                if (numcntnt == 0) {
                    system("cls");
                    Interface();
                }
                else if (numcntnt < newMap.getCountOfConts() && numcntnt >= 1) {
                    check = 1;
                }
                else {
                    system("cls");
                    cerr << "\nWrong number.";
                }
            }
            check = 0;
            numcntnt--;
            int numctr;
            while (check != 1) {
                std::cout << "Choose country:\n";
                newMap.cont[numcntnt].printAllCntrs();
                std::cout << "Answer:";
                cin >> numctr;

                if (numctr == -1) {
                    system("cls");
                    Interface();
                }
                else if (numctr < newMap.cont[numcntnt].getNumOfCountries() && numctr >= 1) {
                    check = 1;
                }
                else {
                    cerr << "\nWrong number.\n";
                }
            }
            numctr--;
            if (newMap.cont[numcntnt].country[numctr].capital.getId() != 0) {
                newMap.cont[numcntnt].country[numctr].removeCityCapital();
                system("cls");
                cout << "\nCapital is successfully removed.\n";
                Interface();
            }
            else {
                cout << "\nThere is no capital in this country\n";
            }
        }
        else if (comnum == 6) {
            if (newMap.cont.size() == 0) {
                system("cls");
                cout << "\nThere is no continents.\n";
                Interface();
            }
            int numcntnt;
            bool check = false;
            while (check != 1) {
                std::cout << "Choose continent from 1 to " << newMap.getCountOfConts() + 1 << ", or 0 to go back:\n";
                newMap.printAllCntnts();
                std::cout << "Answer:";
                cin >> numcntnt;
                if (numcntnt == 0) {
                    system("cls");
                    Interface();
                }
                else if (numcntnt < newMap.getCountOfConts() && numcntnt >= 1) {
                    check = 1;
                }
                else {
                    system("cls");
                    cerr << "\nWrong number.";
                }
            }
            string name, square;
            check = false;
            while (comstr != "BACK")
                while (check != 1) {
                    std::cout << "Type name if you want to continue or 'BACK' if you want to go back: ";
                    cin >> comstr;
                    if (comstr == "BACK") {
                        system("cls");
                        Interface();
                    }
                    check = checkForRightName(comstr);
                    system("cls");
                }
            name = comstr;
            check = 0;
            while (check != 1) {
                std::cout << "Type square if you want continue or 'BACK' if you want to go back: ";
                cin >> comstr;
                if (comstr == "BACK") {
                    system("cls");
                    Interface();
                }
                check = checkSquare(comstr);
                system("cls");
                if (check == 0) {
                    cerr << "Wrong name;\n";
                }
                else {
                    for (auto& cont : newMap.cont) {
                        if (cont.getName() == comstr) {
                            cerr << "\nThis name has already been taken.\n";
                            check = false;
                            break;
                        }
                    }
                }
            }
            square = comstr;
            newMap.cont[numcntnt].addCountry(name, square);
            
        }
        else if (comnum == 7) {
            if (newMap.cont.size() == 0) {
                system("cls");
                cout << "\nThere is no continents.\n";
                Interface();
            }
            newMap.printAll();
        }
        else if (comnum == 8) {
            cout << "\nShutting program down";
        }
        else {
            cerr << "Wrong command;\n";
        }
    }
}
int main()
{
    createMap(newMap);
    Interface();
}
