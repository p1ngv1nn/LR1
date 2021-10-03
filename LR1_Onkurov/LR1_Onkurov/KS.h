#include <iostream>
#include <string>
using namespace std;
string g_KSname;
struct KS
{
    int id;
    int kolvocehov;
    int kolvocehovvrabote;
    double efektivnost;
};
void AddKS()
{
    bool pravilnost = false;
    while (pravilnost == false) 
    {
        system("cls");
        cout << "Please enter the name of pipe:";
        cin >> g_KSname;
        KS g_KSname;
        cout << "id:"; cin >> g_KSname.id; cout << endl;
        cout << "kolvocehov:"; cin >> g_KSname.kolvocehov; cout << endl;
        cout << "kolvocehovvrabote:"; cin >> g_KSname.kolvocehovvrabote; cout << endl;
        
        if (g_KSname.kolvocehov < g_KSname.kolvocehovvrabote)
        {
            cout << "kolvocehov doljno bit bolshe chem kolvocehov v rabote" << endl;
            system("pause");
        }
        else
        {
            g_KSname.efektivnost = (double)g_KSname.kolvocehovvrabote/g_KSname.kolvocehov*100;
            cout << "efektivnost:"<<g_KSname.efektivnost<<"%"<< endl;
            system("pause");
            pravilnost = true;
        }
    }
}