// Lesson#14 - Declaration Vs Definition
#include <iostream>

using namespace std;

//function declaration
void add(int, int);

int main()
{
	add(20, 20);

	return 0;
}

// function definition
void add(int a, int b)
{
	cout << (a + b);
}