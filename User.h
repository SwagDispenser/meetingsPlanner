#include <iostream>
#include <string>

using namespace std;

#ifndef USER_H
#define USER_H



class User {
    private:
    string name;
    int age;
    public:
    User() : name("Анонім"), age(18) {}
    User(string n, int a) : name(n), age(a) {}
    User(string n) : User(n, 18) {}
    ~User() { cout << "User знищено: " << name << endl; }
    void display() const { cout << "Користувач: " << name << " Вік: " << age << endl; }
};



#endif //USER_H
