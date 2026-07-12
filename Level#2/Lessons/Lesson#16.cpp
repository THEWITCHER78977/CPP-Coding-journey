// Lesson#16 - Function Overloading
#include <iostream>

using namespace std;

double MySum(double a, double b)
{
	return (a + b);
}

int MySum(int a, int b)
{
	return (a + b);
}

int MySum(int a, int b, int c)
{
	return (a + b + c);
}

int MySum(int a, int b, int c, int d)
{
	return (a + b + c + d);
}

int main()
{
	cout << MySum(10, 20) << endl;
	cout << MySum(10.4, 20.34) << endl;
	cout << MySum(10, 20, 30) << endl;
	cout << MySum(10, 20, 30, 40) << endl;

	return 0;
}
