// Problem#9
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

void PrintAllDigitsFrequency(int Number)
{
	cout << endl;
	
	for (int i = 0; i < 10; i++)
	{
		short DigitFrequency = 0;
		DigitFrequency = CountDigitFrequency(i, Number);

		if (DigitFrequency > 0)
		{
			cout << "Digit " << i << " Frequency id "
				<< DigitFrequency << " Time(s).\n";
		}
	}
}

int main()
{
	int Number = ReadPsotiveNumber("Pleae Enter a Psotive Number? ");
	PrintAllDigitsFrequency(Number);
	return 0;
}
