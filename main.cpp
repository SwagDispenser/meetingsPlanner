#include <iostream>
#include "user.h"

using namespace std;

int main() {
    cout << "Кількість користувачів: " << User::getUserCount() << endl;

    User u1("Олександр", "olex@example.com");
    User u2("Марія", "maria@example.com");

    cout << "Кількість користувачів: " << User::getUserCount() << endl;

    User u3 = u1;

    User u4 = move(u2);

    ++u1;
    cout << u1 << endl;

    const User u5("Анна", "anna@example.com");
    cout << "Ім'я користувача const: " << u5.getName() << endl;

    User u6 = u1 + u3;
    cout << "Об'єднаний користувач: " << u6 << endl;

    User u7;
    cin >> u7;
    cout << "Введений користувач: " << u7 << endl;

    cout << "Кількість користувачів: " << User::getUserCount() << endl;

    return 0;
}