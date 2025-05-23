#include "Organizer.h"
#include <iostream>
#include <utility>

Organizer::Organizer() : Participant(), department("") {}

Organizer::Organizer(const std::string& name, const std::string& email, const std::string& department)
    : Participant(name, email), department(department) {}

Organizer::Organizer(const Organizer& other)
    : Participant(other), department(other.department) {}

Organizer::Organizer(Organizer&& other) noexcept
    : Participant(std::move(other)), department(std::move(other.department)) {}

Organizer::~Organizer() {}

Organizer& Organizer::operator=(const Organizer& other) {
    if (this != &other) {
        Participant::operator=(other);
        department = other.department;
    }
    return *this;
}

Organizer& Organizer::operator=(Organizer&& other) noexcept {
    if (this != &other) {
        Participant::operator=(std::move(other));
        department = std::move(other.department);
    }
    return *this;
}

std::string Organizer::getDepartment() const {
    return department;
}

void Organizer::setDepartment(const std::string& department) {
    this->department = department;
}

void Organizer::describe() const {
    std::cout << "[Organizer] " << name << " from department: " << department << std::endl;
}

std::string Organizer::getRole() const {
    return "Organizer";
}

void Organizer::displayInfo() const {
    describe();
}
