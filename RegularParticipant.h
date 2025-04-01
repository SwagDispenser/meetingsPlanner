#ifndef REGULARPARTICIPANT_H
#define REGULARPARTICIPANT_H

#include "Participant.h"
#include <string>

class RegularParticipant : public Participant {
private:
    std::string position;
    std::string company;
    bool confirmed;

public:
    // Конструктори
    RegularParticipant();
    RegularParticipant(const std::string& name, const std::string& email, const std::string& position, const std::string& company, bool confirmed);
    RegularParticipant(const RegularParticipant& other);            // Конструктор копіювання
    RegularParticipant(RegularParticipant&& other) noexcept;        // Конструктор переміщення

    // Деструктор
    ~RegularParticipant();

    // Геттери
    std::string getPosition() const;
    std::string getCompany() const;
    bool isConfirmed() const;

    // Оператори присвоєння
    RegularParticipant& operator=(const RegularParticipant& other); // Оператор копіювання
    RegularParticipant& operator=(RegularParticipant&& other) noexcept; // Оператор переміщення

    // Сеттери
    void setPosition(const std::string& position);
    void setCompany(const std::string& company);
    void setConfirmed(bool confirmed);

    void display() const;
};

#endif // REGULARPARTICIPANT_H