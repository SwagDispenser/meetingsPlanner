#include "meeting.h"

Meeting::Meeting() : title("Без назви"), date("01.01.2000"), time("00:00") {}

Meeting::Meeting(string t, string d, string tm, vector<User> p)
    : title(t), date(d), time(tm), participants(p) {}

Meeting::~Meeting() {
    cout << "Зустріч \"" << title << "\" видалена.\n";
}

void Meeting::addParticipant(const User& u) {
    participants.push_back(u);
}

void Meeting::display() const {
    cout << "Зустріч: " << title << ", Дата: " << date << ", Час: " << time << endl;
    cout << "Учасники:\n";
    for (const auto& u : participants) {
        u.display();
    }
}