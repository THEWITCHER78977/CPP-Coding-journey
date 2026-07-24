// problem#9
#include <iostream>
#include<cstdlib>

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
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}

void PrintMatrix(int arr[3][3], int Rows, int Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			printf(" %0*d   ", 2, arr[i][j]);
		}
		cout << endl;
	}
}

void PrintMidlleRow(int arr[3][3], int Rows, int RowNumber)
{
	for (int i = 0; i < Rows; i++)
	{
		printf(" %0*d   ", 2, arr[RowNumber][i]);

	}
}

void PrintMidlleCol(int arr[3][3], int Rows, int ColNumber)
{
	for (int i = 0; i < Rows; i++)
	{
		printf(" %0*d   ", 2, arr[i][ColNumber]);

	}
}

int main()
{
	srand((unsigned)time(NULL));
	int arr[3][3];

	FillMatrixWithRandomNumbers(arr, 3, 3);
	cout << "\nMatrix1 :\n";
	PrintMatrix(arr, 3, 3);

	cout << "\nMidlle Row of Matrix 1 is :\n";
	PrintMidlleRow(arr, 3, 1);
	cout << endl;

	cout << "\nMidlle col of Matrix 1 is :\n";
	PrintMidlleCol(arr, 3, 1);
	cout << endl;

	return 0;
}
