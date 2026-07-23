// Problem#1
#include <iostream>
#include<cstdlib>

using namespace std;

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void Print3x3RandomMatrix()
{
	int Matrixe[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			Matrixe[i][j] = RandomNumber(1, 100);
		}
	}

	cout << "The Following is a 3x3 Random Matrix : \n";

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << Matrixe[i][j] << "\t";
		}
		cout << endl;
	}



}

int main()
{
	srand((unsigned)time(NULL));


	Print3x3RandomMatrix();
	return 0;
}