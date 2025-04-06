#include "Location.h"

#include <iostream>

Location::Location() : name(""), address(""), country("") {}

Location::Location(const std::string& name, const std::string& address, const std::string& country)
    : name(name), address(address), country(country) {}

Location::~Location() {}

Location& Location::operator=(const Location& other) {
    if (this != &other) {
        name = other.name;
        address = other.address;
        country = other.country;
    }
    return *this;
}

Location& Location::operator=(Location&& other) noexcept {
    if (this != &other) {
        name = std::move(other.name);
        address = std::move(other.address);
        country = std::move(other.country);
    }
    return *this;
}

std::string Location::getName() const {
    return name;
}

std::string Location::getAddress() const {
    return address;
}

std::string Location::getCountry() const {
    return country;
}

// Сеттери
void Location::setName(const std::string& name) {
    this->name = name;
}

void Location::setAddress(const std::string& address) {
    this->address = address;
}

void Location::setCountry(const std::string& country) {
    this->country = country;
}

void Location::display() const {
    std::cout << "Location: " << name << "Address: " << address << "Country: " << country << "\n";
}
