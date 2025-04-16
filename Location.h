#ifndef LOCATION_H
#define LOCATION_H
#include <string>

class Location {
public:
    std::string name;
    std::string address;
    std::string country;

    Location();
    Location(const std::string& name, const std::string& address, const std::string& country);
    Location(const Location& other);
    Location(Location&& other) noexcept;
    ~Location();

    Location& operator=(const Location& other);
    Location& operator=(Location&& other) noexcept;

    std::string getName() const;
    std::string getAddress() const;
    std::string getCountry() const;

    void setName(const std::string& name);
    void setAddress(const std::string& address);
    void setCountry(const std::string& country);

    void display() const;
};

#endif // LOCATION_H