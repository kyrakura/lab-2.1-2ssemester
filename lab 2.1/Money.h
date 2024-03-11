#pragma once
#include <iostream>

using namespace std;

class Money {
    int first; 
    int second; 
public:
    Money(); 
    Money(int x, int y); 
    Money(const Money& other); 

    void SetFirst(int value);
    void SetSecond(int value);
    int GetFirst() const;
    int GetSecond() const;

    bool Init(int x, int y); // конструктор ініціалізації
    void Read(); // введення з клавіатури
    void Display() const; // вивід на екран
    int summa() const;

    Money& operator=(const Money& other); // операція присвоєння
    Money operator++(); // префіксний інкремент
    Money operator++(int); // постфіксний інкремент
    Money operator--(); // префіксний декремент
    Money operator--(int); // постфіксний декремент

    friend istream& operator>>(istream& is, Money& obj); 
    friend ostream& operator<<(ostream& os, const Money& obj);
    operator string() const; 
};
