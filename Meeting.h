#ifndef MEETING_H
#define MEETING_H

#include <string>
#include <vector>
#include "RegularParticipant.h"
#include "Organizer.h"
#include "Location.h"

class Meeting {
public:
    std::string title;
    std::string description;
    std::string dateTime;
    Organizer organizer;
    std::vector<RegularParticipant> participants;
    Location location;

    // Конструктори
    Meeting();
    Meeting(const std::string& title, const std::string& description, const std::string& dateTime,
            const Organizer& organizer, const Location& location);
    Meeting(const Meeting& other);
    Meeting(Meeting&& other) noexcept;

    // Деструктор
    ~Meeting();

    // Геттери
    std::string getTitle() const;
    std::string getDescription() const;
    std::string getDateTime() const;
    Organizer getOrganizer() const;
    Location getLocation() const;
    std::vector<RegularParticipant> getParticipants() const;

    // Оператори присвоєння
    Meeting& operator=(const Meeting& other); // Оператор копіювання
    Meeting& operator=(Meeting&& other) noexcept; // Оператор переміщення

    // Сеттери
    void setTitle(const std::string& title);
    void setDescription(const std::string& description);
    void setDateTime(const std::string& dateTime);
    void setOrganizer(const Organizer& organizer);
    void setLocation(const Location& location);

    // Методи роботи з учасниками
    void addParticipant(const RegularParticipant& participant);
    void removeParticipant(const std::string& participantEmail);

    void display() const;
};

#endif // MEETING_H