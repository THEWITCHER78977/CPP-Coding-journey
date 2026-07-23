// Problem#6
#include <iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

void FillMAtrixWithOrderedNumbers(int arr[3][3], int Rows, int Cols)
{
	int Counter = 0;
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			Counter++;
			arr[i][j] = Counter;
		}
	}
}

void PrintMatrix(int arr[3][3], int Rows, int Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << "      ";
		}
		cout << endl;
	}
}

void FillTransPoseMatrix(int arr[3][3], int TransPoseMatrix[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			TransPoseMatrix[j][i] = arr[i][j];
		}
	}


}



int main()
{

	int arr[3][3];
	int TransPoseMatrix[3][3];
	FillMAtrixWithOrderedNumbers(arr, 3, 3);
	cout << "\nthe Follwing is a 3x3 ordered matrix:\n";
	PrintMatrix(arr, 3, 3);

	FillTransPoseMatrix(arr, TransPoseMatrix, 3, 3);
	
	cout << "\nthe Follwing is a 3x3 TransPose Matrix :\n";
	PrintMatrix(TransPoseMatrix, 3, 3);

	return 0;
}