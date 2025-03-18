#include "user.h"

int User::userCount = 0;  // Ініціалізація статичного поля

User::User() : name("Невідомий"), email("unknown@example.com") {
    userCount++;
}

User::User(string n, string e) : name(n), email(e) {
    userCount++;
}

User::User(const User& other) : name(other.name), email(other.email) {
    userCount++;
    cout << "Копіювання користувача: " << name << endl;
}

User::User(User&& other) noexcept : name(move(other.name)), email(move(other.email)) {
    userCount++;
    cout << "Переміщення користувача: " << name << endl;
}

User::~User() {
    userCount--;
    cout << "Користувач " << name << " видалений.\n";
}

void User::display() const {
    cout << "Користувач: " << name << ", Email: " << email << endl;
}

string User::getName() const {
    return name;
}

int User::getUserCount() {
    return userCount;
}

User& User::operator++() {
    this->name += "_VIP";
    return *this;
}

User User::operator++(int) {
    User temp = *this;
    this->name += "_VIP";
    return temp;
}

User User::operator+(const User& other) const {
    return User(this->name + " & " + other.name, this->email);
}

ostream& operator<<(ostream& os, const User& user) {
    os << "Користувач: " << user.name << ", Email: " << user.email;
    return os;
}

istream& operator>>(istream& is, User& user) {
    cout << "Введіть ім'я: ";
    is >> user.name;
    cout << "Введіть email: ";
    is >> user.email;
    return is;
}