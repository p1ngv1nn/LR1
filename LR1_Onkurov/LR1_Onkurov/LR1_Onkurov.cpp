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
    cout << "1. Добавить трубу" << endl;
    cout << "2. Добавить КС" << endl;
    cout << "3. Просмотр всех объектов" << endl;
    cout << "4. Редактировать трубу" << endl;
    cout << "5. Редактировать КС" << endl;
    cout << "6. Сохранить" << endl;
    cout << "7. Загрузить" << endl;
    cout << "0. Выход" << endl;
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
            cout << "Неверный ввод" << endl;
            cin >> number;

        }
    }
   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

