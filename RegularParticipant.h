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
    RegularParticipant();
    RegularParticipant(const std::string& name, const std::string& email, const std::string& position, const std::string& company, bool confirmed);
    RegularParticipant(const RegularParticipant& other);
    RegularParticipant(RegularParticipant&& other) noexcept;

    ~RegularParticipant();

    std::string getPosition() const;
    std::string getCompany() const;
    bool isConfirmed() const;

    RegularParticipant& operator=(const RegularParticipant& other);
    RegularParticipant& operator=(RegularParticipant&& other) noexcept;

    void setPosition(const std::string& position);
    void setCompany(const std::string& company);
    void setConfirmed(bool confirmed);

    void display() const;
};

#endif // REGULARPARTICIPANT_H