#include <iostream>
#include <string>
using namespace std;
struct KS
{
    string Name;
    int id;
    int kolvocehov;
    int kolvocehovvrabote;
    double efektivnost;
};
void PrintKSMenu()
{
    system("cls");
    cout << "1. Change Name" << endl;
    cout << "2. Change id" << endl;
    cout << "3. Change kolvocehov" << endl;
    cout << "4. Change kolvocehovvrabote" << endl;
    cout << "Number Of Menu:";
}
void PunctesOfPipeMenu(int numberOfmenu, KS Obj)
{
    system("cls");
    switch (numberOfmenu)
    {
    case 1:
        cout << "name:"; cin >> Obj.Name; cout << endl;
        break;
    case 2:
        cout << "id:"; cin >> Obj.id; cout << endl;
        break;
    case 3:
        cout << "kolvocehov:"; cin >> Obj.kolvocehov; cout << endl;
        break;
    case 4:
        cout << "efektivnost:"; cin >> Obj.kolvocehovvrabote; cout << endl;
        break;
    }
}
void PrintKS(KS Obj)
{
    cout << "Compressor station" << endl;
    cout << "Name:" << Obj.Name << endl;
    cout << "id:" << Obj.id << endl;
    cout << "dlina:" << Obj.kolvocehov << endl;
    cout << "diametr:" << Obj.kolvocehovvrabote << endl;
    cout << "efektivnost:" << Obj.efektivnost << "%" << endl;
    system("pause");
}
KS KSname = {};
void AddKS(bool write, bool rewrite)
{
    if (write)
    {
        bool pravilnost = true;
        while (pravilnost)
        {
            system("cls");
            cout << "name:"; cin >> KSname.Name; cout << endl;
            cout << "id:"; cin >> KSname.id; cout << endl;
            cout << "kolvocehov:"; cin >> KSname.kolvocehov; cout << endl;
            cout << "kolvocehovvrabote:"; cin >> KSname.kolvocehovvrabote; cout << endl;

            if (KSname.kolvocehov < KSname.kolvocehovvrabote)
            {
                cout << "kolvocehov doljno bit bolshe chem kolvocehov v rabote" << endl;
                system("pause");
            }
            else
            {
                KSname.efektivnost = (double)KSname.kolvocehovvrabote / KSname.kolvocehov * 100;
                cout << "efektivnost:" << KSname.efektivnost << "%" << endl;
                system("pause");
                pravilnost = false;
            }
        }
    }
    else 
    {
        if (rewrite)
        {
            int numberOfMenu;
            PrintKSMenu();
            cin >> numberOfMenu;

        }
        else
        {
            PrintKS(KSname);
        }
       
    }
}