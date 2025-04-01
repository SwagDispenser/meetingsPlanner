#include <iostream>
#include "Organizer.h"
#include "RegularParticipant.h"
#include "Meeting.h"

int main() {

    std::cout << "\nOrganizer:\n";
    Organizer org1("Іван", "ivan@example.com", "HR");
    Organizer org2(org1); // Виклик конструктора копіювання
    Organizer org3(std::move(org1)); // Виклик конструктора переміщення
    std::cout << "Org2: " << org2.getName() << ", " << org2.getEmail() << ", " << org2.getDepartment() << std::endl;
    std::cout << "Org3: " << org3.getName() << ", " << org3.getEmail() << ", " << org3.getDepartment() << std::endl;

    std::cout << "\nRegularParticipant:\n";
    RegularParticipant p1("Марія", "maria@example.com", "Менеджер", "TechCorp", true);
    RegularParticipant p2(p1); // Виклик конструктора копіювання
    RegularParticipant p3(std::move(p1)); // Виклик конструктора переміщення
    std::cout << "P2: " << p2.getName() << ", " << p2.getEmail() << ", " << p2.getCompany() << std::endl;
    std::cout << "P3: " << p3.getName() << ", " << p3.getEmail() << ", " << p3.getCompany() << std::endl;

    std::cout << "\nMeeting:\n";
    Location loc("Офіс", "вул. Головна, 12", "Україна");
    Meeting meet1("Річна зустріч", "Обговорення результатів", "2025-04-10 10:00", org2, loc);
    meet1.addParticipant(p2);
    meet1.addParticipant(p3);

    Meeting meet2(meet1); // Виклик конструктора копіювання
    Meeting meet3(std::move(meet1)); // Виклик конструктора переміщення

    std::cout << "Meet2: " << meet2.getTitle() << ", Організатор: " << meet2.getOrganizer().getName() << std::endl;
    std::cout << "Meet3: " << meet3.getTitle() << ", Організатор: " << meet3.getOrganizer().getName() << std::endl;

    return 0;
}