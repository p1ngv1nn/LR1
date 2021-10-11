#include <iostream>
#include <string>
using namespace std; 
struct Pipe
{
    string Name;
    string id;
    string dlina;
    string diametr;
};
bool nonstop; bool stop;
bool CheckNumberOfPipeMenu(string numberOfMenu)
{
    char arrayNumbersOfMenu[8] = { '0','1','2','3','4'};
    int stop = 0;
    if (numberOfMenu.length() == 1)
    {
        int i = 0;
        for (i; i < 8; ++i)
        {
            if (arrayNumbersOfMenu[i] == numberOfMenu[0])
            {
                ++stop;
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
    else
    {
        return false;
    }
}
void PrintPipe(Pipe Obj)
{
    if (Obj.Name == "")
    {
        cout << "Don't have Pipe" << endl; cout << endl; 
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
    cout << "0. Exit" << endl;
    cout << "1. Change Name" << endl;
    cout << "2. Change id" << endl;
    cout << "3. Change dlina" << endl;
    cout << "4. Change diametr" << endl;
    cout << "Number Of Menu:";
}
bool CheckAlphabet(string arrayOfNumbers)
{   
    char arrayNumbersOfMenu[10] = { '0','1','2','3','4','5','6','7','8','9'};
    int stop = 0;
    for (int i = 0; i < arrayOfNumbers.length(); i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (arrayOfNumbers[i] ==arrayNumbersOfMenu[j])
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
void PunctesOfPipeMenu(char numberOfmenu,Pipe Obj)
{
    system("cls");
    switch (numberOfmenu)
    {
    case '0':
        nonstop = false;
        break;
    case '1':
        cout << "Name:"; cin >> Obj.Name; cout << endl;
        break;
    case '2':
        cout << "id:"; cin >> Obj.id; cout << endl;
        break;
    case '3':
        stop = true;
        while (stop)
        {
            system("cls");
            cout << "dlina:";
            cin >> Obj.dlina;
            if (CheckAlphabet(Obj.dlina))
            {
                system("cls");
                cout << "Incorrect Input" << endl;;
                system("pause");
            }
            else
            {
                stop = false;
                cout << endl;
            }
        }
        break;
    case '4':
        stop = true;
        while (stop)
        {
            system("cls");
            cout << "Diametr:";
            cin >> Obj.diametr;
            if (CheckAlphabet(Obj.diametr))
            {
                system("cls");
                cout << "Incorrect Input" << endl;;
                system("pause");
            }
            else
            {
                stop = false;
                cout << endl;
            }
        }
        break;
    }
}
Pipe first = {};
void AddPipe(bool write, bool rewrite)
{ 
    if (write)
    {
            system("cls");
            cout << "name:"; cin >> first.Name; cout << endl; system("cls");
            cout << "id:"; cin >> first.id; cout << endl;
            bool stopForNumbers = true; 
            while (stopForNumbers)
            {
                system("cls");
                cout << "dlina:";
                cin >> first.dlina;
                if (CheckAlphabet(first.dlina))
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
                cout << "Diametr:";
                cin >> first.diametr;
                if (CheckAlphabet(first.diametr))
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
    }
    else
    {
        if (rewrite)
        {
            string numberOfMenu;
            nonstop = true;
            while (nonstop)
            {
                PrintPipeMenu();
                cin >> numberOfMenu;
                if (CheckNumberOfPipeMenu(numberOfMenu))
                {
                    PunctesOfPipeMenu(numberOfMenu[0],first);
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
        system("cls");
        PrintPipe(first);
        }
        
    }
}
