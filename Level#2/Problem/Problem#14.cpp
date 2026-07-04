// Problem#14
#include <iostream>
#include<string>

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

void PrintInvertedLetterPattern(int Number)
{
	cout << "\n";

	for (int i = 65 + Number - 1; i >= 65; i--)
	{

		for (int j = 1; j <= Number - (65 + Number - 1 - i); j++)
		{
			cout << char(i);
		}

		cout << "\n";
	}
}
int main()
{
	PrintInvertedLetterPattern(ReadPsotiveNumber("Plase Enter a Psotive Number? "));
	return 0;
}