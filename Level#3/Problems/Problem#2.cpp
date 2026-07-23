// Problem#2
#include <iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
	int RandomNumber = rand() % (To - From + 1) + From;
	return RandomNumber;

}

void FillMatrixWithRandomNumbers(int arr[3][3], int Rows, int Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}

void PrintMatrix(int arr[3][3], int Rows, int Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << "       ";
		}
		cout << endl;
	}
}

void SumOfMatrixRows(int arr[3][3], int Rows, int Cols)
{
	int RowSum = 0;
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			RowSum = RowSum + arr[i][j];
		}
		cout << "Row " << i + 1 << " Sum = " << RowSum << endl;
		RowSum = 0;

	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];
	
	FillMatrixWithRandomNumbers(arr, 3, 3);
	cout << "\nThe Following is a 3x3 Random Matrix: \n";
	PrintMatrix(arr, 3, 3);

	cout << "\nThe Following are the Sum of each Rowin the Matrix: \n";
	SumOfMatrixRows(arr, 3, 3);

	return 0;
}
