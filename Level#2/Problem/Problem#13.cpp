// Problem#13.
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

void PrintNumberPattern(int Number)
{
	cout << "\n";
	for (int i = 1; i <= Number; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}

		cout << "\n";

	}

}

int main()
{
	PrintNumberPattern(ReadPsotiveNumber("Please Enter a Positive Number? "));
	return 0;
}
