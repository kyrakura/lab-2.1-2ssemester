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

    bool Init(int x, int y); // ����������� �����������
    void Read(); // �������� � ���������
    void Display() const; // ���� �� �����
    int summa() const;

    Money& operator=(const Money& other); // �������� ���������
    Money operator++(); // ���������� ���������
    Money operator++(int); // ����������� ���������
    Money operator--(); // ���������� ���������
    Money operator--(int); // ����������� ���������

    friend istream& operator>>(istream& is, Money& obj); 
    friend ostream& operator<<(ostream& os, const Money& obj);
    operator string() const; 
};
