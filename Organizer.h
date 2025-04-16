#ifndef ORGANIZER_H
#define ORGANIZER_H

#include "Participant.h"
#include <string>

class Organizer final : public Participant {
private:
    std::string department;

public:
    Organizer();
    Organizer(const std::string& name, const std::string& email, const std::string& department);
    Organizer(const Organizer& other);
    Organizer(Organizer&& other) noexcept;

    ~Organizer() override;

    Organizer& operator=(const Organizer& other);
    Organizer& operator=(Organizer&& other) noexcept;

    std::string getDepartment() const;
    void setDepartment(const std::string& department);

    void describe() const override;
    std::string getRole() const override;
    void displayInfo() const override;
};

#endif // ORGANIZER_H