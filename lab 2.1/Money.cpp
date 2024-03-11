#include "Money.h"
#include <string>
#include <Windows.h>

Money::Money() : first(0), second(0) {}

Money::Money(int x, int y) {
    Init(x, y);
}

Money::Money(const Money& other) : first(other.first), second(other.second) {}

void Money::SetFirst(int value) {
    first = value;
}

void Money::SetSecond(int value) {
    second = value;
}

int Money::GetFirst() const {
    return first;
}

int Money::GetSecond() const {
    return second;
}

bool Money::Init(int x, int y) {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    if (x == 1 || x == 2 || x == 5 || x == 10 || x == 20 || x == 50 || x == 100 || x == 200 || x == 500) {
        first = x;
        second = y;
        return true;
    }
    else {
        cout << "Неправильний номінал ціни та якості!" << endl;
        return false;
    }
}

void Money::Read() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int x, y;
    do {
        cout << "Введіть номінальну вартість грошей:" << endl;
        cout << "Номінальний = "; cin >> x;
        cout << "Введіть кількість банкнот: "; cin >> y;
    } while (!Init(x, y));
}

void Money::Display() const {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout << endl;
    cout << "Номінальна вартість = " << first << endl;
    cout << "Кількість банкнот = " << second << endl;
}

int Money::summa() const {
    return first * second;
}

Money& Money::operator=(const Money& other) {
    if (this == &other)
        return *this;
    first = other.first;
    second = other.second;
    return *this;
}

Money Money::operator++() {
    ++first;
    return *this;
}

Money Money::operator++(int) {
    Money temp(*this);
    ++(*this);
    return temp;
}

Money Money::operator--() {
    --second;
    return *this;
}

Money Money::operator--(int) {
    Money temp(*this);
    --(*this);
    return temp;
}

istream& operator>>(istream& is, Money& obj) {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int x, y;
    cout << "Введіть номінальну вартість грошей:" << endl;
    cout << "Номінальний = "; is >> x;
    cout << "Введіть кількість банкнот: "; is >> y;
    obj.Init(x, y);
    return is;
}

ostream& operator<<(ostream& os, const Money& obj) {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    os << "Номінальна вартість = " << obj.first << endl;
    os << "Кількість банкнот = " << obj.second << endl;
    return os;
}

Money::operator string() const {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    return "Номінальна вартість = " + to_string(first) + "\nКількість банкнот = " + to_string(second);
}
