// Problem#7
#include <iostream>

using namespace std;

int ReadPsotiveNumber(string Massege)
{
	int Number = 0;
	do
	{
		cout << Massege;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

int ReversNumber(int Number)
{
	int Remainder = 0, Number2 = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;
	}

	return Number2;
}

int main()
{ 
	int RNumber = ReversNumber(ReadPsotiveNumber("Please Enter a Postive Number? "));
	cout << "\nReverse in: \n" << RNumber << "\n";
	return 0;
}
