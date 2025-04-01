#include "Participant.h"

#include <iostream>
#include <ostream>

// Конструктор за замовчуванням
Participant::Participant() : name(""), email("") {}

// Конструктор з параметрами
Participant::Participant(const std::string& name, const std::string& email)
    : name(name), email(email) {}

// Конструктор копіювання
Participant::Participant(const Participant& other)
    : name(other.name), email(other.email) {}

// Оператор копіювання
Participant& Participant::operator=(const Participant& other) {
    if (this != &other) {
        name = other.name;
        email = other.email;
    }
    return *this;
}

// Оператор переміщення
Participant& Participant::operator=(Participant&& other) noexcept {
    if (this != &other) {
        name = std::move(other.name);
        email = std::move(other.email);
    }
    return *this;
}

// Конструктор переміщення
Participant::Participant(Participant&& other) noexcept
    : name(std::move(other.name)), email(std::move(other.email)) {}

// Деструктор
Participant::~Participant() {}

// Геттери
std::string Participant::getName() const {
    return name;
}

std::string Participant::getEmail() const {
    return email;
}

// Сеттери
void Participant::setName(const std::string& name) {
    this->name = name;
}

void Participant::setEmail(const std::string& email) {
    this->email = email;
}

