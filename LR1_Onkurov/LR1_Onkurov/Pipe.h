#include <iostream>
#include <string>
using namespace std; 
struct Pipe
{
    string Name;
    int id;
    double dlina;
    double diametr;
};
void PrintPipe(Pipe Obj)
{
    if (Obj.Name == "")
    {
        cout << "Dont have Pipe" << endl; cout << endl; 
    }
    else
    {
        cout << "Pipe" << endl;
        cout << "Name:"<< Obj.Name << endl;
        cout << "id:" << Obj.id << endl;
        cout << "dlina:" << Obj.dlina << endl;
        cout << "diametr:" << Obj.diametr << endl;
        cout << endl; system("pause");
    }
    
}
void PrintPipeMenu()
{
    system("cls");
    cout << "1. Change Name" << endl;
    cout << "2. Change id" << endl;
    cout << "3. Change dlina" << endl;
    cout << "4. Change diametr" << endl;
    cout << "Number Of Menu:";
}
void PunctesOfPipeMenu(int numberOfmenu,Pipe Obj)
{
    system("cls");
    switch (numberOfmenu)
    {
    case 1:
        cout << "Name:"; cin >> Obj.Name; cout << endl;
        break;
    case 2:
        cout << "id:"; cin >> Obj.id; cout << endl;
        break;
    case 3:
        cout << "dlina:"; cin >> Obj.dlina; cout << endl;
        break;
    case 4:
        cout << "diametr:"; cin >> Obj.diametr; cout << endl;
        break;
    }
}
Pipe first = {};
void AddPipe(bool write, bool rewrite)
{ 
    if (write)
    {
        system("cls");
        cout << "name:"; cin >> first.Name; cout << endl;
        cout << "id:"; cin >> first.id; cout << endl;
        cout << "dlina:"; cin >> first.dlina; cout << endl;
        cout << "diametr:"; cin >> first.diametr; cout << endl;
    }
    else
    {
        if (rewrite)
        {
            int numberOfMenu;
            PrintPipeMenu();
            cin >> numberOfMenu;
            PunctesOfPipeMenu(numberOfMenu, first);
        }
        else
        {
        system("cls");
        PrintPipe(first);
        }
        
    }
}
