// HomeWork#2
#include <iostream>

using namespace std;

//MY Code
/*void PrintNumberDown(int N, int M)
{
	if (N >= M)
	{
		cout << N << endl;
		PrintNumberDown(N - 1, M);
	}
}
PrintNumberDown(10, 1);
*/

//Selotion
void PrintNumbersFromMtoN(int M, int N)
{
	if (M >= N)
	{
		cout << M << endl;

		PrintNumbersFromMtoN(M - 1, N);
	}
}

int main()
{
	PrintNumbersFromMtoN(10, 1);
	return 0;
}
