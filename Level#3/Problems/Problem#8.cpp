// Problem#8
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
			printf(" %0*d   ",2, arr[i][j]);
		}
		cout << endl;
	}
}

void MultiplyTowMAtrices(int arr1[3][3], int arr2[3][3], int arrMul[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			arrMul[i][j] = arr1[i][j] * arr2[i][j];
		}
	}
}

int main()
{
	srand((unsigned)time(NULL)); 

	int arr1[3][3], arr2[3][3], arrMult[3][3];

	cout << "\nMartix1 : \n";
	FillMatrixWithRandomNumbers(arr1, 3, 3);
	PrintMatrix(arr1, 3, 3);

	cout << "\nMartix2 : \n";
	FillMatrixWithRandomNumbers(arr2, 3, 3);
	PrintMatrix(arr2, 3, 3);

	cout << "\nResults : \n";
	MultiplyTowMAtrices(arr1, arr2, arrMult, 3, 3);
	PrintMatrix(arrMult, 3, 3);

	return 0;
}