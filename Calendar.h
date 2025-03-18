#ifndef CALENDAR_H
#define CALENDAR_H

#include <vector>
#include "meeting.h"

class Calendar {
private:
    vector<Meeting> meetings;

public:
    Calendar();                         // Конструктор за замовчуванням
    void addMeeting(const Meeting& m);  // Додати зустріч
    void showMeetings() const;          // Вивести всі зустрічі
};

#endif // CALENDAR_H