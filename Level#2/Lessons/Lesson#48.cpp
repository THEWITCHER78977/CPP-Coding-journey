// Lesson#48 - Vector Iterators
#include <iostream>
#include<vector>

using namespace std;

int main()
{
	
	vector <int> vNum{ 1,2,3,4,5 };

	//declare iterator
	vector <int>::iterator iter;

	// use iterator with for loop
	for (iter = vNum.begin(); iter != vNum.end(); iter++)
	{
		cout << *iter << " ";
	}

	return 0;
}
