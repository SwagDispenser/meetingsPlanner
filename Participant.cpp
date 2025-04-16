#include "Participant.h"
#include <iostream>

Participant::Participant() : name(""), email("") {}

Participant::Participant(const std::string& name, const std::string& email)
    : name(name), email(email) {}

Participant::Participant(const Participant& other)
    : name(other.name), email(other.email) {}

Participant& Participant::operator=(const Participant& other) {
    if (this != &other) {
        name = other.name;
        email = other.email;
    }
    return *this;
}

Participant& Participant::operator=(Participant&& other) noexcept {
    if (this != &other) {
        name = std::move(other.name);
        email = std::move(other.email);
    }
    return *this;
}

Participant::Participant(Participant&& other) noexcept
    : name(std::move(other.name)), email(std::move(other.email)) {}

Participant::~Participant() {}

std::string Participant::getName() const {
    return name;
}

std::string Participant::getEmail() const {
    return email;
}

void Participant::setName(const std::string& name) {
    this->name = name;
}

void Participant::setEmail(const std::string& email) {
    this->email = email;
}

std::string Participant::getRole() const {
    return "Participant";
}

void Participant::displayInfo() const {
    std::cout << "Name: " << name << ", Email: " << email << std::endl;
}
