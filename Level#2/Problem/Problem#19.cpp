// Problem#19
#include <iostream>
#include<cstdlib>

using namespace std;

int RandomNumber(int From, int To)
{
	//Function to generate a random number

	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	cout << rand() << endl;
	cout << rand() << endl;

	cout << RandomNumber(1, 5) << endl;
	cout << RandomNumber(1, 5) << endl;
	cout << RandomNumber(1, 5) << endl;

	return 0;
}
