#include <iostream>
#include <string>

#include "Location.h"
#include "Meeting.h"
#include "User.h"

using namespace std;


int main() {
    Meeting meet1("Робоча зустріч", "05-03-2025", "10:00");
    Meeting meet2("Дружня зустріч");

    User user1("Олексій", 25);
    User user2("Марина");

    Location loc1("вул. Шевченка, 10", "Київ");
    Location loc2("пл. Ринок, 1");

    meet1.display();
    meet2.display();

    user1.display();
    user2.display();

    loc1.display();
    loc2.display();

    return 0;
}