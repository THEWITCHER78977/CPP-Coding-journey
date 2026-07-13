// Lesson#31 - Remove elements
#include <iostream>
#include<vector>

using namespace std;

int main()
{
	vector <int> vNumbers;

	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	vNumbers.push_back(50);

	cout << "stack size : " << vNumbers.size() << endl;

	// remove last element in the vector
	vNumbers.pop_back();

	//check if vector is empoty for anoher pop
	if (!vNumbers.empty())
	{
		vNumbers.pop_back();
	}

	//chekcing the size of the vector for another pop
	if (vNumbers.size() > 0)
	{
		vNumbers.pop_back();
	}

	//remove all elements from the vector
	vNumbers.clear();

	for (int& Number : vNumbers)
	{
		cout << Number << endl;
	}

	return 0;
}
