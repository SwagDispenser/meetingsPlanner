#include <iostream>
#include <string>

using namespace std;

#ifndef MEETING_H
#define MEETING_H



class Meeting {
private:
    string title;
    string date;
    string time;
public:
    Meeting() : title("Не вказано"), date("01-01-2025"), time("00:00") {}
    Meeting(string t, string d, string tm) : title(t), date(d), time(tm) {}
    Meeting(string t) : Meeting(t, "01-01-2025", "00:00") {}
    ~Meeting() { cout << "Meeting знищено: " << title << endl; }
    void display() const { cout << "Зустріч: " << title << " Дата: " << date << " Час: " << time << endl; }
};




#endif //MEETING_H
