#include <iostream>
#include <string>

using namespace std;

#ifndef LOCATION_H
#define LOCATION_H

class Location {
private:
    string address;
    string city;
public:
    Location() : address("Невідомо"), city("Невідоме місто") {}
    Location(string a, string c) : address(a), city(c) {}
    Location(string a) : Location(a, "Невідоме місто") {}
    ~Location() { cout << "Location знищено: " << address << endl; }
    void display() const { cout << "Адреса: " << address << " Місто: " << city << endl; }
};

#endif //LOCATION_H
