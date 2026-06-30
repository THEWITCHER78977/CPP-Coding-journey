// Problem#3
#include <iostream>

using namespace std;

int ReadPositiveNumebr(string Massege)
{
	int Numebr;
	do
	{

		cout << Massege << endl;
		cin >> Numebr;

	} while (Numebr <= 0);

	return Numebr;
}

bool isPerfectNumber(int Number)
{
	int Sum = 0;
	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
		{
			Sum += i;
		}
	}
	return Number == Sum;
}

void PrintResults(int Number)
{
	if (isPerfectNumber(Number))
		cout << Number << " Is Perfect Number.\n";
	else
		cout << Number << " Is Not Perfect Number.\n";
}

int main()
{
	PrintResults(ReadPositiveNumebr("Please Enter a Positive Number ?"));
	return 0;
}
