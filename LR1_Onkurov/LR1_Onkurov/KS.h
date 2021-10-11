#include <iostream>
#include <string>
using namespace std;
struct KS
{
    string Name;
    string id;
    string kolvocehov;
    string kolvocehovvrabote;
    string efektivnost;
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
void PunctesOfKSMenu(int numberOfmenu, KS Obj)
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
bool CheckKSAlphabet(string arrayOfNumbers)
{
    char arrayNumbersOfMenu[10] = { '0','1','2','3','4','5','6','7','8','9' };
    int stop = 0;
    for (int i = 0; i < arrayOfNumbers.length(); i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (arrayOfNumbers[i] == arrayNumbersOfMenu[j])
            {
                stop += 1;
            }
        }
    }
    if (stop != 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
void PrintKS(KS Obj)
{
    if (Obj.Name == "")
    {
        cout << "Dont have KS" << endl; system("pause");
    }
    else
    {
        cout << "Compressor station" << endl;
        cout << "Name:" << Obj.Name << endl;
        cout << "id:" << Obj.id << endl;
        cout << "dlina:" << Obj.kolvocehov << endl;
        cout << "diametr:" << Obj.kolvocehovvrabote << endl;
        cout << "efektivnost:" << Obj.efektivnost << "%" << endl;
        system("pause");
    }
    
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
            system("cls");
            cout << "id:"; cin >> KSname.id; cout << endl;
            bool stopForNumbers = true;
            while (stopForNumbers)
            {
                system("cls");
                cout << "Kolvocehov:";
                cin >> KSname.kolvocehov;
                if (CheckAlphabet(KSname.kolvocehov))
                {
                    system("cls");
                    cout << "Incorrect Input" << endl;;
                    system("pause");
                }
                else
                {
                    stopForNumbers = false;
                    cout << endl;
                }
            }
            stopForNumbers = true;
            while (stopForNumbers)
            {
                system("cls");
                cout << "kolvocehovvrabote";
                cin >> KSname.kolvocehovvrabote;
                if (CheckAlphabet(KSname.kolvocehovvrabote))
                {
                    system("cls");
                    cout << "Incorrect Input" << endl;;
                    system("pause");
                }
                else
                {
                    stopForNumbers = false;
                    cout << endl;
                }
            }
            if (KSname.kolvocehov > KSname.kolvocehovvrabote)
            {
                cout << "kolvocehov doljno bit bolshe chem kolvocehov v rabote" << endl;
                system("pause");
            }
            else
            {
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
            PunctesOfKSMenu(numberOfMenu,KSname);
        }
        else
        {
            PrintKS(KSname);
        }
    }
}