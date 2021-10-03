#include <iostream>
#include <string>
#include "Pipe.h"
#include "KS.h"
using namespace std;
bool g_stop;
void PrintMenu()
{ 
    system("cls");
    cout << "1. Add Pipe" << endl;
    cout << "2. Add KS" << endl;
    cout << "3. Loooks all object" << endl;
    cout << "4. Change pipe characteristic" << endl;
    cout << "5. Change KS characteristic"<< endl;
    cout << "6. Save" << endl;
    cout << "7. Load" << endl;
    cout << "0. Exit" << endl;
    cout << "Number Of Menu:";
}
void PunctesOfMenu(int numberOfMenu)
{
    switch (numberOfMenu)
    {
        case 0:
            g_stop=false;
            break;
        case 1:
            AddPipe(true,false);
            break;
        case 2:
            AddKS(true,false);
            break;
        case 3:
            AddPipe(false,false);
            AddKS(false,false);
            break;
        case 4:
            AddPipe(false, true);
            break;
        case 5:
            AddKS(false, true);
            break;
        case 6:
            break;
        case 7:
            break;
    }
}
int main()
{
    g_stop = true;
    int numberOfMenu;
    while (g_stop)
    {
        PrintMenu();
        cin >> numberOfMenu;
        PunctesOfMenu (numberOfMenu);
    }
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

