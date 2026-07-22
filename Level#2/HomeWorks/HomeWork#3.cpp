// HomeWork#3
#include <iostream>

using namespace std;

int RecursionPower(int Base, int Power)
{
	if (Power == 0)
		return 1;
	else
		return Base * RecursionPower(Base, Power - 1);
}

int main()
{
	cout << RecursionPower(2, 4) << endl;
	return 0;
}
