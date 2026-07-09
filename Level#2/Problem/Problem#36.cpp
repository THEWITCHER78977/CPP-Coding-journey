// Problem#36
#include <iostream>
#include<cstdlib>

using namespace std;

int ReadNumber()
{
	int Number = 0;
	
	cout << "\nPlease Enter a Numebr? ";
	cin >> Number;

	return Number;
}

void AddArrayElement(int Numebr, int arr[100], int& arrLength)
{
	//its a new element so we need to add the length by 1
	arrLength++;
	arr[arrLength - 1] = Numebr;
}

void InputUserNumbersInArray(int arr[100], int& arrLength)
{
	bool AddMore = true;

	do
	{
		AddArrayElement(ReadNumber(), arr, arrLength);

		cout << "\nDo you want to add more numbers? [0]:No,[1]:yes? ";
		cin >> AddMore;

	} while (AddMore);
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

	int arr[100];      
	int arrLength = 0; 


	InputUserNumbersInArray(arr, arrLength);

	cout << "\nArray Length: " << arrLength << endl;
	cout << "Array elements: ";
	PrintArray(arr, arrLength);
	return 0;
}
