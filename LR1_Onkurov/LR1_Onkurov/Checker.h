#include <iostream>
#include <string>
using namespace std;
bool CheckNumberOfMenu(string numberOfMenu)
{
	char arrayNumbersOfMenu[8]  = { '0','1','2','3','4','5','6','7' };
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
		if (stop != 1)
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