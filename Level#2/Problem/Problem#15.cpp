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

void PrintLetterPattern(int Number)
{
	cout << "\n";

	for (int i = 65 ; i <= 65 + Number - 1; i++)
	{

		for (int j = 1; j <= i - 65 + 1; j++)
		{
			cout << char(i);
		}

		cout << "\n";
	}
}
int main()
{
	PrintLetterPattern(ReadPsotiveNumber("Plase Enter a Psotive Number? "));
	return 0;
}