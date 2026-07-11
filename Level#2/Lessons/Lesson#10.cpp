// Lesson#10 - Ranged Loop
#include <iostream>

using namespace std;

int main()
{
	int Array[] = { 1,2,3,4,5,6,7,8,9 };
	
	for (int Number : Array)
	{
		cout << Number << endl;
	}
	//uses Collaction
	for (int Number : { 1, 2, 3, 4, 5, 6, 7, 8, 9 })
	{
		cout << Number << endl;
	}

	return 0;
}