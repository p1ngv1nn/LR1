#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    
}
void Menu()
{
    system("cls");
    cout << "1. �������� �����" << endl;
    cout << "2. �������� ��" << endl;
    cout << "3. �������� ���� ��������" << endl;
    cout << "4. ������������� �����" << endl;
    cout << "5. ������������� ��" << endl;
    cout << "6. ���������" << endl;
    cout << "7. ���������" << endl;
    cout << "0. �����" << endl;
    cout << ">";
}
int Get_NumberOfMenu (int inputNumber)
{
    int number;
    if (inputNumber<8 && inputNumber>=0)
    {
        return inputNumber;
    }
    else
    {
        while (true)
        {
            cout << "�������� ����" << endl;
            cin >> number;

        }
    }
   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

