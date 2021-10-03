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
    cout << "Pipe" << endl;
    cout << "Name:"<< Obj.Name << endl;
    cout << "id:" << Obj.id << endl;
    cout << "dlina:" << Obj.dlina << endl;
    cout << "diametr:" << Obj.diametr << endl;
    cout << endl;
}
Pipe first = {};
void AddPipe(bool write)
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
        system("cls");
        PrintPipe(first);
    }
}
