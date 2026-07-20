// Lesson#49 - Try Catch
#include <iostream>
#include<vector>

using namespace std;

int main()
{
	vector <int> vNum{ 1,2,3,4,5 };

	try
	{
		cout << vNum.at(5);
	}
	catch (...)
	{
		cout << "Out of Bound\n";
	}
	return 0;
}
