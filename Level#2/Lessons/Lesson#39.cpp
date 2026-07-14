// Lesson#39 :  - Call by Reference: Using pointers
#include <iostream>

using namespace std;

//using Pointers
void Swap(int* n1, int* n2)
{
	int Temp;
	Temp = *n1;
	*n1 = *n2;
	*n2 = Temp;
}

int main()
{

	int a = 1, b = 2;

	cout << "Befor Swapping" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//we use Address so the the pointer in the function can take it 
	Swap(&a, &b);


	cout << "After Swapping" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}
