// Problem#30
#include <iostream>
#include<cstdlib>

using namespace std;

int RandomNumber(int From, int To)
{
	//Function to generate a random number

	int randNum = rand() % (To - From + 1) + From;
	return randNum;
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

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}

void SumOf2Arrays(int arr1[100], int arr2[100], int arrSum[100], int arrLength)
{
	int Counter = 0;

	for (int i = 0; i < arrLength; i++)
	{
		arrSum[i] = arr1[i] + arr2[i];
	}
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}

	cout << "\n";
}

int main()
{
	srand((unsigned)time(NULL));

	int arr1[100], arr2[100], arrSum[100];
	int arrLength = ReadPsotiveNumber("How many elements ?\n");

	FillArrayWithRandomNumbers(arr1, arrLength);
	FillArrayWithRandomNumbers(arr2, arrLength);

	SumOf2Arrays(arr1, arr2, arrSum, arrLength);

	cout << "\nArray 1 Elements: \n";
	PrintArray(arr1, arrLength);

	cout << "\nArray 2 Elements: \n";
	PrintArray(arr2, arrLength);

	cout << "\nSum of Array 1 and Array 2 Elements: \n";
	PrintArray(arrSum, arrLength);

	return 0;
}