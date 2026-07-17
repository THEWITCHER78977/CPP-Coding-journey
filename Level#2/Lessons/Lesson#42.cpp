// Lesson#42 - Pointer to Void
#include <iostream>

using namespace std;

int main()
{
	void* ptr;//with out a type can point to any type 

	float f1 = 10.5;
	int x = 20;

	ptr = &f1;

	cout << ptr << endl;
	cout << *(static_cast<float*>(ptr)) << endl;//change it from void to the pointed type

	ptr = &x;

	cout << ptr << endl;
	cout << *(static_cast<int*>(ptr)) << endl;

	return 0;
}