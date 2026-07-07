// Problem#26
#include <iostream>
#include<cstdlib>

using namespace std;

int RandomNumber(int From, int To)
{
	//Function to generate a random number

	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
	cout << "\nenter number Of Elements: \n";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
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

void CopyArray(int arr[100], int arr2[100], int arrLength)
{

	for (int i = 0; i < arrLength; i++)
	{
		arr2[i] = arr[i];
	}

}

int main()
{
	srand((unsigned)time(NULL));
	int arr[100], arrLength;

	FillArrayWithRandomNumbers(arr, arrLength);

	int arr2[100];

	CopyArray(arr, arr2, arrLength);

	cout << "\nArray 1 Elements: ";
	PrintArray(arr, arrLength);

	cout << "\nArray 2 Elements: ";
	PrintArray(arr2, arrLength);


	return 0;
}
