#include "Meeting.h"

#include <iostream>
#include <ostream>

// Конструктор за замовчуванням
Meeting::Meeting() : title(""), description(""), dateTime(""), organizer(), location() {}

// Конструктор з параметрами
Meeting::Meeting(const std::string& title, const std::string& description, const std::string& dateTime,
                 const Organizer& organizer, const Location& location)
    : title(title), description(description), dateTime(dateTime), organizer(organizer), location(location) {}

// Конструктор копіювання
Meeting::Meeting(const Meeting& other)
    : title(other.title), description(other.description), dateTime(other.dateTime),
      organizer(other.organizer), participants(other.participants), location(other.location) {}

// Конструктор переміщення
Meeting::Meeting(Meeting&& other) noexcept
    : title(std::move(other.title)), description(std::move(other.description)), dateTime(std::move(other.dateTime)),
      organizer(std::move(other.organizer)), participants(std::move(other.participants)), location(std::move(other.location)) {}

// Оператор копіювання
Meeting& Meeting::operator=(const Meeting& other) {
    if (this != &other) {
        title = other.title;
        description = other.description;
        dateTime = other.dateTime;
        organizer = other.organizer;
        participants = other.participants;
        location = other.location;
    }
    return *this;
}

// Оператор переміщення
Meeting& Meeting::operator=(Meeting&& other) noexcept {
    if (this != &other) {
        title = std::move(other.title);
        description = std::move(other.description);
        dateTime = std::move(other.dateTime);
        organizer = std::move(other.organizer);
        participants = std::move(other.participants);
        location = std::move(other.location);
    }
    return *this;
}

// Деструктор
Meeting::~Meeting() {}

// Геттери
std::string Meeting::getTitle() const {
    return title;
}

std::string Meeting::getDescription() const {
    return description;
}

std::string Meeting::getDateTime() const {
    return dateTime;
}

Organizer Meeting::getOrganizer() const {
    return organizer;
}

Location Meeting::getLocation() const {
    return location;
}

std::vector<RegularParticipant> Meeting::getParticipants() const {
    return participants;
}

// Сеттери
void Meeting::setTitle(const std::string& title) {
    this->title = title;
}

void Meeting::setDescription(const std::string& description) {
    this->description = description;
}

void Meeting::setDateTime(const std::string& dateTime) {
    this->dateTime = dateTime;
}

void Meeting::setOrganizer(const Organizer& organizer) {
    this->organizer = organizer;
}

void Meeting::setLocation(const Location& location) {
    this->location = location;
}

// Додавання учасника
void Meeting::addParticipant(const RegularParticipant& participant) {
    participants.push_back(participant);
}

// Видалення учасника за email
void Meeting::removeParticipant(const std::string& participantEmail) {
    participants.erase(std::remove_if(participants.begin(), participants.end(),
        [&participantEmail](const RegularParticipant& p) {
            return p.getEmail() == participantEmail;
        }), participants.end());
}

void Meeting::display() const {
    std::cout << "Title" << title << std::endl;
}
