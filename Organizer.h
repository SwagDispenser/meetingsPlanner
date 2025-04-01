#ifndef ORGANIZER_H
#define ORGANIZER_H

#include "Participant.h"
#include <string>

class Organizer : public Participant {
private:
    std::string department;
public:
    // Конструктори
    Organizer();
    Organizer(const std::string& name, const std::string& email, const std::string& department);
    Organizer(const Organizer& other);            // Конструктор копіювання
    Organizer(Organizer&& other) noexcept;        // Конструктор переміщення

    // Деструктор
    ~Organizer();

    // Оператори присвоєння
    Organizer& operator=(const Organizer& other); // Оператор копіювання
    Organizer& operator=(Organizer&& other) noexcept; // Оператор переміщення


    // Геттери
    std::string getDepartment() const;

    // Сеттери
    void setDepartment(const std::string& department);

};

#endif // ORGANIZER_H