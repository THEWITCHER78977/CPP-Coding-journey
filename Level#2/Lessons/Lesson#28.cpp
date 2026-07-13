// Lesson#28 Vectors - Introduction , Declaration and Initialization
#include <iostream>
#include<vector>

using namespace std;

int main()
{
	// std::Vector<type> Vector_Name

	vector <int> vNumbers = { 10,20,30,40,50 };

	cout << "Numbers vector = ";

	//Range loop
	for (int& Number : vNumbers)
	{
		cout << Number << " ";
	}

	cout << endl;
	return 0;
}
