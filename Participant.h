#ifndef PARTICIPANT_H
#define PARTICIPANT_H

#include <string>

class Participant {
public:
    std::string name;
    std::string email;

    Participant();
    Participant(const std::string& name, const std::string& email);
    Participant(const Participant& other);            // Конструктор копіювання
    Participant(Participant&& other) noexcept;        // Конструктор переміщення

    Participant& operator=(const Participant& other); // Оператор копіювання
    Participant& operator=(Participant&& other) noexcept; // Оператор переміщення

    ~Participant();

    std::string getName() const;
    std::string getEmail() const;

    void setName(const std::string& name);
    void setEmail(const std::string& email);
};

#endif // PARTICIPANT_H