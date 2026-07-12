// Lesson#20  - Static Variables
#include <iostream>

using namespace std;

void MyFunc()
{
	static int numebr = 1;
	cout << "Value of Number: " << numebr << endl;

	numebr++;
}

int main()
{
	MyFunc();
	MyFunc();
	MyFunc();
	MyFunc();
	MyFunc();

	return 0;
}
