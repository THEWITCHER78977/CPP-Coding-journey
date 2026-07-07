// Problem#21
#include <iostream>
#include<cstdlib>
#include<string>

using namespace std;

enum enCharType { SamallLetter = 1, CapitalLetter = 2, SpecialCharachter = 3, Digit = 4 };

int RandomNumber(int From, int To)
{
	//Function to generate a random number

	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

char GetRandomCharacter(enCharType CharType)
{
	switch (CharType)
	{
	case enCharType::SamallLetter:
	{
		return char(RandomNumber(97, 122));
		break;
	}
	case enCharType::CapitalLetter:
	{
		return char(RandomNumber(65, 90));
		break;
	}
	case enCharType::SpecialCharachter:
	{
		return char(RandomNumber(33, 47));
		break;
	}
	case enCharType::Digit:
	{
		return char(RandomNumber(48, 57));
	}
	}
}

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

string GenerateWord(enCharType CharType, short Length)
{
	string Word;

	for (int i = 1; i <= Length; i++)
	{
		Word = Word + GetRandomCharacter(CharType);
	}
	return Word;
}

string GenerateKey()
{
	string Key = "";

	Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4);

	return Key;
}

void GenerateKeys(short NumberOfKeys)
{
	for (int i = 1; i <= NumberOfKeys; i++)
	{
		cout << "Key [" << i << "] : ";
		cout << GenerateKey() << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	GenerateKeys(ReadPsotiveNumber("Pleaes enter how many keys to generate? \n "));
	return 0;
}
