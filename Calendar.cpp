#include "calendar.h"
#include <iostream>

using namespace std;

Calendar::Calendar() = default;

void Calendar::addMeeting(const Meeting& m) {
    meetings.push_back(m);
}

void Calendar::showMeetings() const {
    if (meetings.empty()) {
        cout << "Немає запланованих зустрічей.\n";
        return;
    }
    for (const auto& m : meetings) {
        m.display();
    }
}