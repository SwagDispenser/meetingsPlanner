#ifndef MENU_H
#define MENU_H

#include <vector>
#include <memory>
#include <string>
#include "Meeting.h"

class Menu {
public:
    static const std::string ADMIN_PASSWORD;
    static const std::string MEETINGS_FILE;
    static const std::string HISTORY_FILE;

    static void adminMenu(std::vector<std::shared_ptr<Meeting>>& meetings);
    static void userMenu(const std::vector<std::shared_ptr<Meeting>>& meetings);
    static void loadMeetings(std::vector<std::shared_ptr<Meeting>>& meetings);
};

#endif