#include <iostream>
#include <string>
#include "Pipe.h"
#include "KS.h"
#include "Checker.h" 
#include <fstream>
using namespace std;
bool g_stop; fstream inOut; string line;
void PrintMenu()
{ 
    system("cls");
    cout << "1. Add Pipe" << endl;
    cout << "2. Add KS" << endl;
    cout << "3. Loooks all object" << endl;
    cout << "4. Change pipe characteristic" << endl;
    cout << "5. Change KS characteristic"<< endl;
    cout << "6. Save in file.txt" << endl;
    cout << "7. Description out of file.txt" << endl;
    cout << "0. Exit" << endl;
    cout << "Number Of Menu:";
}
void PunctesOfMenu(char numberOfMenu)
{
    switch (numberOfMenu)
    {
        case '0':
            g_stop=false;
            break;
        case '1':
            AddPipe(true,false);
            break;
        case '2':
            AddKS(true,false);
            break;
        case '3':
            AddPipe(false,false);
            AddKS(false,false);
            break;
        case '4':
            AddPipe(false, true);
            break;
        case '5':
            AddKS(false, true);
            break;
        case '6':
            inOut.open("file.txt", ios::out);
            if (KSname.Name == "")
            {
                inOut << "Dont have KS" << endl;
            }
            else
            {
                inOut << "Compressor station" << endl;
                inOut << "Name:" << KSname.Name << endl;
                inOut << "id:" << KSname.id << endl;
                inOut << "dlina:" << KSname.kolvocehov << endl;
                inOut << "diametr:" << KSname.kolvocehovvrabote << endl;
                inOut << "efektivnost:" << KSname.efektivnost << "%" << endl;
            }
            if (first.Name == "")
            {
                inOut << "Dont have Pipe" << endl;
            }
            else
            {
                inOut << "Pipe" << endl;
                inOut << "Name:" << first.Name << endl;
                inOut << "id:" << first.id << endl;
                inOut << "dlina:" << first.dlina << endl;
                inOut << "diametr:" << first.diametr << endl;
            }
            inOut.close();
            break;
        case '7':
            inOut.open("file.txt");
            system("cls");
            while (getline(inOut, line))
            {
                cout << line << endl;
            }
            system("pause");
            break;
    }
}
int main()
{
    g_stop = true;
    string numberOfMenu = {};
    while (g_stop)
    {
        PrintMenu();
        cin >> numberOfMenu;
        if (CheckNumberOfMenu(numberOfMenu))
        {
            PunctesOfMenu(numberOfMenu[0]);
        }
        else
        {
           system("cls");
           cout << "Incorrect Input" << endl;;
           system("pause");
        }
    }   
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

