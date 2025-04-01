#include "Organizer.h"

#include <iostream>
#include <ostream>

// Конструктор за замовчуванням
Organizer::Organizer() : Participant(), department("") {}

// Конструктор з параметрами
Organizer::Organizer(const std::string& name, const std::string& email, const std::string& department)
    : Participant(name, email), department(department) {}

// Конструктор копіювання
Organizer::Organizer(const Organizer& other)
    : Participant(other), department(other.department) {}

// Конструктор переміщення
Organizer::Organizer(Organizer&& other) noexcept
    : Participant(std::move(other)), department(std::move(other.department)) {}

// Деструктор
Organizer::~Organizer() {}

// Геттери
std::string Organizer::getDepartment() const {
    return department;
}

// Оператор копіювання
Organizer& Organizer::operator=(const Organizer& other) {
    if (this != &other) {
        Participant::operator=(other);
        department = other.department;
    }
    return *this;
}

// Оператор переміщення
Organizer& Organizer::operator=(Organizer&& other) noexcept {
    if (this != &other) {
        Participant::operator=(std::move(other));
        department = std::move(other.department);
    }
    return *this;
}

// Сеттери
void Organizer::setDepartment(const std::string& department) {
    this->department = department;
}
