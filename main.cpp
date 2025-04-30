#include <iostream>
#include <vector>
#include <memory>
#include "Menu.h"
#include "Meeting.h"

int main() {
    std::vector<std::shared_ptr<Meeting>> meetings;
    Menu::loadMeetings(meetings);

    int role;
    std::cout << "Вітаємо в програмі-планувальнику зустрічей!\n";
    std::cout << "1. Увійти як користувач\n2. Увійти як адміністратор\nОберіть роль: ";
    std::cin >> role;

    if (role == 1) {
        Menu::userMenu(meetings);
    } else if (role == 2) {
        std::string password;
        std::cout << "Введіть пароль адміністратора: ";
        std::cin >> password;

        if (password == Menu::ADMIN_PASSWORD) {
            Menu::adminMenu(meetings);
        } else {
            std::cout << "Невірний пароль!\n";
        }
    } else {
        std::cout << "Невідома опція!\n";
    }

    return 0;
}