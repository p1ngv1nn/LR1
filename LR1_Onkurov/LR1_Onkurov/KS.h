#include <iostream>
#include <string>
using namespace std;
bool dontstop; bool pause;
struct KS
{
    string Name;
    string id;
    string kolvocehov;
    string kolvocehovvrabote;
    string efektivnost;
};
bool CheckNumberOfKSMenu(string numberOfMenu)
{
    char arrayNumbersOfMenu[6] = { '0','1','2','3','4','5'};
    int stop = 0;
    if (numberOfMenu.length() == 1)
    {
        int i = 0;
        for (i; i < 6; ++i)
        {
            if (arrayNumbersOfMenu[i] == numberOfMenu[0])
            {
                ++stop;
            }
        }
        if (stop == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
void PrintKSMenu()
{
    system("cls");
    cout << "0. Exit" << endl;
    cout << "1. Change Name" << endl;
    cout << "2. Change id" << endl;
    cout << "3. Change kolvocehov" << endl;
    cout << "4. Change kolvocehovvrabote" << endl;
    cout << "5. Change efektivnost" << endl;
    cout << "Number Of Menu:";
}
void PunctesOfKSMenu(char numberOfmenu, KS Obj)
{
    system("cls");
    switch (numberOfmenu)
    {
    case'0':
        dontstop = false;
        break;
    case '1':
        cout << "name:"; cin >> Obj.Name; cout << endl;
        break;
    case '2':
        cout << "id:"; cin >> Obj.id; cout << endl;
        break;
    case '3':
        pause = true;
        while (pause)
        {
            system("cls");
            cout << "dlina:";
            cin >> Obj.kolvocehov;
            if (CheckAlphabet(Obj.kolvocehov))
            {
             system("cls");
             cout << "Incorrect Input" << endl;;
             system("pause");
            }
            else
            {
                 pause = false;
                 cout << endl;
            }
        }
        break;
    case '4':
        pause = true;
        while (pause)
        {
            system("cls");
            cout << "dlina:";
            cin >> Obj.kolvocehovvrabote;
            if (CheckAlphabet(Obj.kolvocehovvrabote))
            {
                system("cls");
                cout << "Incorrect Input" << endl;;
                system("pause");
            }
            else
            {
                pause = false;
                cout << endl;
            }
        }
        break;
    case'5':
        cout << "yes";
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
        return true;
    }
    else
    {
        return false;
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
bool CheckEffektivost(string numbersOfEffektivnost)
{
    char arrayNumbersOfMenu[10] = { '0','1','2','3','4','6','7','8','9'};
    if (numbersOfEffektivnost.length() < 4)
    {
        int stop = 0;
        for (int i = 0; i < numbersOfEffektivnost.length(); ++i)
        {
            for (int j = 0; j < 10; ++j)
            {
                if (numbersOfEffektivnost[i] == arrayNumbersOfMenu[j])
                {
                    ++stop;
                }   
            }
        }
        if (stop == numbersOfEffektivnost.length())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
void AddKS(bool write, bool rewrite)
{
    if (write)
    {
        bool pravilnost = true;
        system("cls");
        cout << "name:"; cin >> KSname.Name; cout << endl;
        system("cls");
        cout << "id:"; cin >> KSname.id; cout << endl;
        while (pravilnost)
        {
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
                cout << "kolvocehovvrabote:";
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
            if (KSname.kolvocehovvrabote <= KSname.kolvocehov)
            {
                pravilnost = false;
            }
            else
            {
                system("cls");
                cout << "kolvocehov doljno bit bolshe chem kolvocehovvrabote" << endl;
                system("pause");
            }
        }
            bool stopForNumbers = true;
            while (stopForNumbers)
            {
                system("cls");
                cout << "Effektivnost':";
                cin >> KSname.efektivnost;
                if (CheckKSAlphabet(KSname.efektivnost)&&CheckEffektivost(KSname.efektivnost))
                {
                    stopForNumbers = false;
                    cout << endl;
                }
                else
                {
                    system("cls");
                    cout << "Incorrect Input" << endl;;
                    system("pause");
                }
            }
        
    }
    else 
    {
        if (rewrite)
        {
            string numberOfMenu;
            dontstop = true;
            while (dontstop)
            {
                PrintKSMenu();
                cin >> numberOfMenu;
                if (CheckNumberOfKSMenu(numberOfMenu))
                {
                    PunctesOfKSMenu(numberOfMenu[0], KSname);
                }
                else
                {
                    system("cls");
                    cout << "Incorrect Input" << endl;;
                    system("pause");
                }
            }
        }
        else
        {
            PrintKS(KSname);
        }
    }
}