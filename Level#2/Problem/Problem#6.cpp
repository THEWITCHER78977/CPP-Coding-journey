// Problem#6
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

int SumOfDigita(int Number)
{
	int Sum = 0, Remainder = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Sum = Sum + Remainder;
	}
	return Sum;

}

int main()
{
	cout << "\nSum Of Digits = "
		<< SumOfDigita(ReadPsotiveNumber("Please Enter a Positive Number? "))
		<< "\n";
	return 0;
}
