#include <iostream>
#include <string>
using namespace std; 
string g_Pipename;
struct Pipe
{
    int id;
    int dlina;
    int diametr;
};
void AddPipe()
{
    system("cls");
    cout << "Please enter the name of pipe:";
    cin >> g_Pipename;
    Pipe g_Pipename;
    cout << "id:"; cin >> g_Pipename.id; cout << endl;
    cout << "dlina:"; cin >> g_Pipename.dlina; cout << endl;
    cout << "diametr:"; cin >> g_Pipename.diametr; cout << endl;
}