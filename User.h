#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

using namespace std;

class User {
private:
    string name;
    string email;
    static int userCount;

public:
    User();
    User(string n, string e);
    User(const User& other);
    User(User&& other) noexcept;
    ~User();

    void display() const;
    string getName() const;
    static int getUserCount();

    User& operator++();
    User operator++(int);
    User operator+(const User& other) const;

    friend ostream& operator<<(ostream& os, const User& user);
    friend istream& operator>>(istream& is, User& user);
};

#endif // USER_H