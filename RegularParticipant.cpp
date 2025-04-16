#include "RegularParticipant.h"
#include <iostream>
#include <utility>

RegularParticipant::RegularParticipant()
    : Participant(), position(""), company(""), confirmed(false) {}

RegularParticipant::RegularParticipant(const std::string& name, const std::string& email, const std::string& position, const std::string& company, bool confirmed)
    : Participant(name, email), position(position), company(company), confirmed(confirmed) {}

RegularParticipant::RegularParticipant(const RegularParticipant& other)
    : Participant(other), position(other.position), company(other.company), confirmed(other.confirmed) {}

RegularParticipant::RegularParticipant(RegularParticipant&& other) noexcept
    : Participant(std::move(other)), position(std::move(other.position)), company(std::move(other.company)), confirmed(other.confirmed) {}

RegularParticipant& RegularParticipant::operator=(const RegularParticipant& other) {
    if (this != &other) {
        Participant::operator=(other);
        this->position = other.position;
        this->company = other.company;
    }
    return *this;
}

RegularParticipant& RegularParticipant::operator=(RegularParticipant&& other) noexcept {
    if (this != &other) {
        Participant::operator=(std::move(other));
        this->position = std::move(other.position);
        this->company = std::move(other.company);
    }
    return *this;
}


RegularParticipant::~RegularParticipant() {}

std::string RegularParticipant::getPosition() const {
    return position;
}

std::string RegularParticipant::getCompany() const {
    return company;
}

bool RegularParticipant::isConfirmed() const {
    return confirmed;
}

void RegularParticipant::setPosition(const std::string& position) {
    this->position = position;
}

void RegularParticipant::setCompany(const std::string& company) {
    this->company = company;
}

void RegularParticipant::setConfirmed(bool confirmed) {
    this->confirmed = confirmed;
}

void RegularParticipant::describe() const {
    std::cout << "[Regular] " << name << " from " << company
              << ", Position: " << position
              << (confirmed ? " (Confirmed)" : " (Not confirmed)")
              << std::endl;
}

std::string RegularParticipant::getRole() const {
    return "RegularParticipant";
}

void RegularParticipant::displayInfo() const {
    describe();
}

void RegularParticipant::doStaticThing() {
    std::cout << "Static: RegularParticipant is doing a static thing.\n";
}