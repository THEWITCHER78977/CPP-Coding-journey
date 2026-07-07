// Problem#22

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

void ReadArray(int arr[100], int &arrLength)
{

	cout << "\nEnter number of elements:\n";
	cin >> arrLength;

	cout << "\nEnter array elements: \n";
	for (int i = 0; i < arrLength; i++)
	{
		cout << "Elemnt [" << i + 1 << "] : ";
		cin >> arr[i];
	}
	cout << endl;
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}

	cout << "\n";
}

int TimesRepeated(int Number, int arr[100], int arrLength)
{
	int Count = 0;

	for (int i = 0; i <= arrLength - 1; i++)
	{
		if (Number == arr[i])
		{
			Count++;
		}
	}
	return Count;
}

int main()
{
	int arr[100];
	int arrLength = 0, NumberToCeck;

	ReadArray(arr, arrLength);

	NumberToCeck = ReadPsotiveNumber("Enter the Number you want to check: ");

	cout << "\nOriginal array: ";
	PrintArray(arr, arrLength);

	cout << "Numebr : " << NumberToCeck;
	cout << " Is Repeated ";
	cout << TimesRepeated(NumberToCeck, arr, arrLength) << " time(s).\n";

	return 0;
}

