#include "Money.h"
#include <Windows.h>
#pragma pack(pop)
#pragma pack(push, 1)
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Money m1; // ����������� ��� ���������
    Money m2(100, 5); // ����������� �����������
    Money m3 = m2; // ����������� ���������

    cout << "����� ��'����:" << endl;
    Money arr[3]; // ����� ��'����
    for (int i = 0; i < 3; ++i) {
        cin >> arr[i]; // �������� � ���������
        cout << "������� " << i + 1 << ":" << endl;
        cout << arr[i]; // ���� �� �����
        cout << "�������� ����: " << arr[i].summa() << endl;
    }

    cout << "����� ����� � #pragma pack(1): " << sizeof(Money) << endl;
    
    cout << "����� ����� ��� #pragma pack(1): " << sizeof(Money) << endl;

    return 0;
}
