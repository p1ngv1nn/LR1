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
void AddKS(bool write)
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
        PrintKS(KSname);
    }
}