#include "Create.h"
void createMap(Map& map) {
    map.addNewContinent("Eurasia", "54,760,000");
    map.addNewContinent("South America", "17,814,000");
    map.addNewContinent("North America", "24,709,000");
    map.addNewContinent("Africa", "30,370,000");
    map.addNewContinent("Antarctica", "14,000,000");
    map.addNewContinent("Australia", "8,600,000");
    map.addNewContinent("Oceania", "1,300,000");
    // Adding more countries to Eurasia
    map.cont[0].addCountry("India", "3,287,263");
    map.cont[0].country[0].addCity("New Delhi", 6, 2);
    map.cont[0].country[0].addCity("Mumbai", 5, 3);
    // Adding more countries and cities to South America
    map.cont[1].addCountry("Brazil", "8,515,767");
    map.cont[1].addCountry("Argentina", "2,780,400");
    map.cont[1].country[0].addCity("Sao Paulo", 7, 6);
    map.cont[1].country[0].addCity("Rio de Janeiro", 6, 7);
    map.cont[1].country[1].addCity("Buenos Aires", 7, 5);
    // Adding countries to North America
    map.cont[2].addCountry("United States", "9,834,000");
    map.cont[2].addCountry("Canada", "9,985,000");
    map.cont[2].addCountry("Mexico", "1,964,375");
    // Adding cities to the United States
    map.cont[2].country[0].addCity("New York City", 10, 10);
    map.cont[2].country[0].addCity("Los Angeles", 11, 12);
    map.cont[2].country[0].addCity("Chicago", 12, 11);
    // Adding cities to Canada
    map.cont[2].country[1].addCity("Toronto", 13, 13);
    map.cont[2].country[1].addCity("Vancouver", 14, 14);
    map.cont[2].country[1].addCity("Montreal", 15, 15);
    // Adding cities to Mexico
    map.cont[2].country[2].addCity("Mexico City", 16, 16);
    map.cont[2].country[2].addCity("Guadalajara", 17, 17);
    map.cont[2].country[2].addCity("Monterrey", 18, 18);
    // Adding more countries and cities to Africa
    map.cont[3].addCountry("Egypt", "1,010,408");
    map.cont[3].addCountry("South Africa", "1,221,037");

    map.cont[3].country[0].addCity("Cairo", 8, 8);
    map.cont[3].country[1].addCity("Johannesburg", 9, 7);
    map.cont[3].country[1].addCity("Cape Town", 8, 9);
    // Adding countries to Australia
    map.cont[5].addCountry("Australia", "7,692,024");

    // Adding cities to Australia
    map.cont[5].country[0].addCity("Sydney", 3, 4);
    map.cont[5].country[0].addCity("Melbourne", 4, 3);

    // Adding countries and cities to Oceania
    map.cont[6].addCountry("Fiji", "18,274");
    map.cont[6].country[0].addCity("Suva", 5, 5);

    map.cont[0].addCountry("Russia", "17,098,242");
    map.cont[0].country[1].addCity("Moscow", 55.7558, 37.6176);
    map.cont[0].country[1].addCity("Saint Petersburg", 59.9343, 30.3351);
    map.cont[0].addCountry("China", "9,596,961");
    map.cont[0].country[2].addCity("Beijing", 39.9042, 116.4074);
    map.cont[0].country[2].addCity("Shanghai", 31.2304, 121.4737);

    // Adding more countries to South America
    map.cont[1].addCountry("Peru", "1,285,216");
    map.cont[1].country[2].addCity("Lima", -12.0464, -77.0428);
    map.cont[1].addCountry("Chile", "756,102");
    map.cont[1].country[3].addCity("Santiago", -33.4489, -70.6693);

    // Adding countries to North America
    map.cont[2].addCountry("Greenland", "2,166,086");
    map.cont[2].country[3].addCity("Nuuk", 64.1836, -51.7214);
    map.cont[2].addCountry("Cuba", "109,884");
    map.cont[2].country[4].addCity("Havana", 23.1136, -82.3666);

    // Adding more countries to Africa
    map.cont[3].addCountry("Nigeria", "923,768");
    map.cont[3].country[2].addCity("Lagos", 6.5244, 3.3792);
    map.cont[3].addCountry("Kenya", "580,367");
    map.cont[3].country[3].addCity("Nairobi", -1.2864, 36.8172);

    // Adding countries to Australia
    map.cont[5].addCountry("New Zealand", "268,021");
    map.cont[5].country[1].addCity("Wellington", -41.2865, 174.7762);
    map.cont[5].addCountry("Papua New Guinea", "462,840");
    map.cont[5].country[2].addCity("Port Moresby", -9.4438, 147.1803);

    // Adding countries and cities to Oceania
    map.cont[6].addCountry("Vanuatu", "12,189");
    map.cont[6].country[1].addCity("Port Vila", -17.7333, 168.3273);
    map.cont[6].addCountry("Federated States of Micronesia", "271");
    map.cont[6].country[2].addCity("Palikir", 6.9248, 158.161);

    // Adding more countries to Antarctica
    map.cont[4].addCountry("Australia (Antarctica Territory)", "5,896,500");
    map.cont[4].country[0].addCity("Casey Station", -66.2929, 110.5361);
    map.cont[4].addCountry("Argentina (Argentine Antarctica)", "1,461,597");
    map.cont[4].country[1].addCity("Ushuaia", -54.8019, -68.3029);

    // Adding countries to Oceania
    map.cont[6].addCountry("Solomon Islands", "28,896");
    map.cont[6].country[3].addCity("Honiara", -9.4456, 159.9721);
    map.cont[6].addCountry("Kiribati", "811");
    map.cont[6].country[4].addCity("Tarawa", 1.3292, 172.9779);

    // Adding countries to Australia
    map.cont[5].addCountry("Fiji", "18,274");
    map.cont[5].country[3].addCity("Suva", -18.1248, 178.4501);
    map.cont[5].addCountry("Samoa", "2,842");
    map.cont[5].country[4].addCity("Apia", -13.8333, -171.75);

    // Adding more countries to Africa
    map.cont[3].addCountry("Tanzania", "945,087");
    map.cont[3].country[4].addCity("Dodoma", -6.1629, 35.7516);
    map.cont[3].addCountry("Algeria", "2,381,741");
    map.cont[3].country[5].addCity("Algiers", 36.7372, 3.0869);

    // Adding more countries to North America
    map.cont[2].addCountry("Jamaica", "10,991");
    map.cont[2].country[5].addCity("Kingston", 17.971, -76.792);
    map.cont[2].addCountry("Haiti", "27,750");
    map.cont[2].country[6].addCity("Port-au-Prince", 18.5944, -72.3074);

    // Adding more countries to South America
    map.cont[1].addCountry("Uruguay", "176,215");
    map.cont[1].country[4].addCity("Montevideo", -34.9011, -56.1645);
    map.cont[1].addCountry("Ecuador", "283,561");
    map.cont[1].country[5].addCity("Quito", -0.1807, -78.4678);

    // Adding more countries to Eurasia
    map.cont[0].addCountry("Japan", "377,975");
    map.cont[0].country[3].addCity("Tokyo", 35.6895, 139.6917);
    map.cont[0].addCountry("Thailand", "513,120");
    map.cont[0].country[4].addCity("Bangkok", 13.7563, 100.5018);
}