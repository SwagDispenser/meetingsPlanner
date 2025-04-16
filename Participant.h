#ifndef PARTICIPANT_H
#define PARTICIPANT_H

#include <string>
#include "InfoHandler.h"

class Participant : public InfoHandler {
public:
    std::string name;
    std::string email;

    Participant();
    Participant(const std::string& name, const std::string& email);
    Participant(const Participant& other);
    Participant(Participant&& other) noexcept;

    Participant& operator=(const Participant& other);
    Participant& operator=(Participant&& other) noexcept;

    virtual ~Participant();

    std::string getName() const;
    std::string getEmail() const;

    void setName(const std::string& name);
    void setEmail(const std::string& email);

    virtual std::string getRole() const;
    virtual void describe() const = 0;
    virtual void displayInfo() const override;

};

#endif // PARTICIPANT_H