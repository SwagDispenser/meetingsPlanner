#ifndef LOCATION_H
#define LOCATION_H

#include <string>

class Location {
public:
    std::string name;
    std::string address;
    std::string country;

    // Конструктори
    Location();
    Location(const std::string& name, const std::string& address, const std::string& country);
    Location(const Location& other);            // Конструктор копіювання
    Location(Location&& other) noexcept;        // Конструктор переміщення
    ~Location();

    // Оператори присвоєння
    Location& operator=(const Location& other); // Оператор копіювання
    Location& operator=(Location&& other) noexcept; // Оператор переміщення

    // Геттери
    std::string getName() const;
    std::string getAddress() const;
    std::string getCountry() const;

    // Сеттери
    void setName(const std::string& name);
    void setAddress(const std::string& address);
    void setCountry(const std::string& country);

    void display() const;
};

#endif // LOCATION_H