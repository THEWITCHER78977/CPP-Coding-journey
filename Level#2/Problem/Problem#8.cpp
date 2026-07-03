// Problem#8
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

int CountDigitFrequency(short DigitTocheck, int Number)
{
	int FreqCount = 0, Remainder = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		if (DigitTocheck == Remainder)
		{
			FreqCount++;
		}
	}
	return FreqCount;
}

int main()
{ 
	int Number = ReadPsotiveNumber("Please Enter a Psotive Number? ");
	short DigitToCheck = ReadPsotiveNumber("Pleae enter one Digit To check? ");

	cout << "\nDigit " << DigitToCheck << " Frequency is "
		<< CountDigitFrequency(DigitToCheck, Number) << " Time(s).\n";
	return 0;
}
