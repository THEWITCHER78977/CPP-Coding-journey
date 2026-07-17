// Lesson#43 - Memory Management: new and delete
#include <iostream>

using namespace std;

int main()
{
	// declare an int pointer
	int* ptrX;

	// declare an float pointer
	float* ptrY;

	// dynamically allocate memory
	ptrX = new int;
	ptrY = new float;

	//assigning valuee to the memory
	*ptrX = 45;
	*ptrY = 54.213;

	cout << *ptrX << endl;
	cout << *ptrY << endl;

	//deallocate the memory
	delete ptrX;
	delete ptrY;

	return 0;
}
