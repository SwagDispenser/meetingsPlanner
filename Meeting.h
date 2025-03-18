#ifndef MEETING_H
#define MEETING_H

#include <iostream>
#include <vector>
#include "user.h"

using namespace std;

class Meeting {
private:
    string title;
    string date;
    string time;
    vector<User> participants;

public:
    Meeting();
    Meeting(string t, string d, string tm, vector<User> p);
    ~Meeting();

    void addParticipant(const User& u);
    void display() const;
};

#endif // MEETING_H