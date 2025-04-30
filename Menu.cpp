#include "Menu.h"
#include <iostream>
#include <fstream>
#include <sstream>

const std::string Menu::ADMIN_PASSWORD = "admin123";
const std::string Menu::MEETINGS_FILE = "meetings.txt";
const std::string Menu::HISTORY_FILE = "user_history.txt";

void Menu::adminMenu(std::vector<std::shared_ptr<Meeting>>& meetings) {
    int choice;
    do {
        std::cout << "\n[Адміністраторське меню]\n";
        std::cout << "1. Додати зустріч\n2. Переглянути всі зустрічі\n3. Вийти\nОберіть опцію: ";
        std::cin >> choice;

        if (choice == 1) {
            std::string title, desc, datetime, name, email, dept;
            std::cin.ignore();
            std::cout << "Назва зустрічі: "; std::getline(std::cin, title);
            std::cout << "Опис: "; std::getline(std::cin, desc);
            std::cout << "Дата і час: "; std::getline(std::cin, datetime);
            std::cout << "Ім'я організатора: "; std::getline(std::cin, name);
            std::cout << "Email організатора: "; std::getline(std::cin, email);
            std::cout << "Відділ: "; std::getline(std::cin, dept);

            Organizer org(name, email, dept);
            Location loc("Офіс", "вул. Головна, 12", "Україна");
            auto meeting = std::make_shared<Meeting>(title, desc, datetime, org, loc);
            meetings.push_back(meeting);
            std::cout << "Зустріч додано!\n";

            std::ofstream out(MEETINGS_FILE, std::ios::app);
            out << title << '|' << desc << '|' << datetime << '|' << name << '|' << email << '|' << dept << '\n';
        } else if (choice == 2) {
            for (const auto& m : meetings) {
                std::cout << "\nЗустріч: " << m->getTitle()
                          << " | " << m->getDateTime()
                          << " | Організатор: " << m->getOrganizer().getName() << '\n';
            }
        }
    } while (choice != 3);
}

void Menu::userMenu(const std::vector<std::shared_ptr<Meeting>>& meetings) {
    std::ofstream history(HISTORY_FILE, std::ios::app);
    history << "Користувач увійшов у систему\n";

    std::cout << "\n[Меню користувача]\nДоступні зустрічі:\n";
    for (const auto& m : meetings) {
        std::cout << "- " << m->getTitle() << " | " << m->getDateTime() << "\n";
        history << "Переглянуто: " << m->getTitle() << "\n";
    }
}

void Menu::loadMeetings(std::vector<std::shared_ptr<Meeting>>& meetings) {
    std::ifstream in(MEETINGS_FILE);
    std::string line;
    while (std::getline(in, line)) {
        std::stringstream ss(line);
        std::string title, desc, datetime, name, email, dept;
        std::getline(ss, title, '|');
        std::getline(ss, desc, '|');
        std::getline(ss, datetime, '|');
        std::getline(ss, name, '|');
        std::getline(ss, email, '|');
        std::getline(ss, dept);

        Organizer org(name, email, dept);
        Location loc("Офіс", "вул. Головна, 12", "Україна");
        meetings.push_back(std::make_shared<Meeting>(title, desc, datetime, org, loc));
    }
}