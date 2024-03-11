#include "Money.h"
#include <Windows.h>
#pragma pack(pop)
#pragma pack(push, 1)
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Money m1; // конструктор без аргументів
    Money m2(100, 5); // конструктор ініціалізації
    Money m3 = m2; // конструктор копіювання

    cout << "Масив об'єктів:" << endl;
    Money arr[3]; // масив об'єктів
    for (int i = 0; i < 3; ++i) {
        cin >> arr[i]; // введення з клавіатури
        cout << "Елемент " << i + 1 << ":" << endl;
        cout << arr[i]; // вивід на екран
        cout << "Загальна сума: " << arr[i].summa() << endl;
    }

    cout << "Розмір класу з #pragma pack(1): " << sizeof(Money) << endl;
    
    cout << "Розмір класу без #pragma pack(1): " << sizeof(Money) << endl;

    return 0;
}
