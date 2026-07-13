// Lesson#33 - Call ByRef/ByVal Important Review.
#include <iostream>

using namespace std;

//call by val
/*
void Function1(int x)
{
	x++;
}
*/

//call by ref
void Function1(int &x)
{
	x++;
}

int main()
{
	int a = 10;

	Function1(a);
	cout << "\n a after calling function1 = " << a << endl;
	cout << a << endl;
	cout << &a << endl;
	return 0;
}
