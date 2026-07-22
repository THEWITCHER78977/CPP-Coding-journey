#include <iostream>

using namespace std;

/*void FillTheMatrix(int x[10][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			x[i][j] = (i + 1) * (j + 1);
		}
	}
}

void printfTheMatrix(int x[10][10])
{

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf(" %0*d ",2, x[i][j]);
		}
		cout << endl;
	}
}
FillTheMatrix(x);
printfTheMatrix(x);*/

int main()
{
	int x[10][10];

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			x[i][j] = (i + 1) * (j + 1);
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf(" %0*d ", 2, x[i][j]);
		}
		cout << endl;
	}
	
	return 0;
}
