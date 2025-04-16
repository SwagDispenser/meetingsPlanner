#include "Meeting.h"

#include <iostream>
#include <ostream>

Meeting::Meeting() : title(""), description(""), dateTime(""), organizer(), location() {}

Meeting::Meeting(const std::string& title, const std::string& description, const std::string& dateTime,
                 const Organizer& organizer, const Location& location)
    : title(title), description(description), dateTime(dateTime), organizer(organizer), location(location) {}

Meeting::Meeting(const Meeting& other)
    : title(other.title), description(other.description), dateTime(other.dateTime),
      organizer(other.organizer), participants(other.participants), location(other.location) {}

Meeting::Meeting(Meeting&& other) noexcept
    : title(std::move(other.title)), description(std::move(other.description)), dateTime(std::move(other.dateTime)),
      organizer(std::move(other.organizer)), participants(std::move(other.participants)), location(std::move(other.location)) {}

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

Meeting::~Meeting() {}

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

void Meeting::addParticipant(const RegularParticipant& participant) {
    participants.push_back(participant);
}

void Meeting::removeParticipant(const std::string& participantEmail) {
    for (auto it = participants.begin(); it != participants.end(); ++it) {
        if (it->getEmail() == participantEmail) {
            participants.erase(it);
            break;
        }
    }
}

void Meeting::display() const {
    std::cout << "Title: " << title << std::endl;
    std::cout << "Description: " << description << std::endl;
    std::cout << "Date/Time: " << dateTime << std::endl;
    std::cout << "Organizer: ";
    organizer.displayInfo();
    std::cout << "Location: ";
    location.display();
    std::cout << "Participants (" << participants.size() << "):" << std::endl;
    for (const auto& p : participants) {
        p.displayInfo();
    }
}

void Meeting::displayInfo() const {
    display();
}