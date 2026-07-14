// Lesson#38  - Pointers vs References
#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int& x = a;

	cout << &a << endl;
	cout << &x << endl;
	//we can only Change value but we cant refrance x to another variable
	x = 12;
	cout << a << endl;
	cout << x << endl;

	int* p = &a;

	cout << p << endl;
	cout << *p << endl;
	//in pointers we can change tha pointer to another variable
	int b = 30;
	p = &b;

	cout << p << endl;
	cout << *p << endl;

	return 0;
}
