// Lesson#35 - What is Pointer?
#include <iostream>

using namespace std;

int main()
{
	int a = 20;
	int b = 50;

	cout << "a value     = " << a << endl;
	cout << "a adress    = " << a << endl;

	/*
	int *p;
	p=&a;
	*/
	int* p = &a;
	cout << "Pointe value = " << p << endl;
	
	p = &b;
	cout << "Pointe value = " << p << endl;

	cout << endl;

	return 0;
}

