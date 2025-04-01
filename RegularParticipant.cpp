#include "RegularParticipant.h"

#include <iostream>
#include <ostream>
#include <utility>  // Для std::move

// Конструктор за замовчуванням
RegularParticipant::RegularParticipant() 
    : Participant(), position(""), company(""), confirmed(false) {}

// Конструктор з параметрами
RegularParticipant::RegularParticipant(const std::string& name, const std::string& email, const std::string& position, const std::string& company, bool confirmed)
    : Participant(name, email), position(position), company(company), confirmed(confirmed) {}

// Конструктор копіювання
RegularParticipant::RegularParticipant(const RegularParticipant& other)
    : Participant(other), position(other.position), company(other.company), confirmed(other.confirmed) {}

// Конструктор переміщення
RegularParticipant::RegularParticipant(RegularParticipant&& other) noexcept
    : Participant(std::move(other)), position(std::move(other.position)), company(std::move(other.company)), confirmed(other.confirmed) {}

// Деструктор
RegularParticipant::~RegularParticipant() {}

// Геттери
std::string RegularParticipant::getPosition() const {
    return position;
}

std::string RegularParticipant::getCompany() const {
    return company;
}

bool RegularParticipant::isConfirmed() const {
    return confirmed;
}

// Сеттери
void RegularParticipant::setPosition(const std::string& position) {
    this->position = position;
}

// Оператор копіювання
RegularParticipant& RegularParticipant::operator=(const RegularParticipant& other) {
    if (this != &other) {
        Participant::operator=(other);
        position = other.position;
        company = other.company;
        confirmed = other.confirmed;
    }
    return *this;
}

// Оператор переміщення
RegularParticipant& RegularParticipant::operator=(RegularParticipant&& other) noexcept {
    if (this != &other) {
        Participant::operator=(std::move(other));
        position = std::move(other.position);
        company = std::move(other.company);
        confirmed = other.confirmed;
    }
    return *this;
}

void RegularParticipant::setCompany(const std::string& company) {
    this->company = company;
}

void RegularParticipant::setConfirmed(bool confirmed) {
    this->confirmed = confirmed;
}
