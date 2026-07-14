// Lesson#40 -  Pointers and Arrays
#include <iostream>

using namespace std;

int main()
{
	int arr[4] = { 10,20,30,40 };
	int* ptr;
	ptr = arr;

	//ptr is equivalent to &arr[0];
	//ptr + 1 is equivalent to &arr[1];
	//ptr + 2 is equivalent to &arr[2];
	//ptr + 3 is equivalent to &arr[3];

	cout << "Addresses of array are : \n";

	cout << ptr << endl;
	cout << ptr + 1 << endl;
	cout << ptr + 2 << endl;
	cout << ptr + 3 << endl;

	cout << "\nValues of array are : \n";
	cout << *(ptr) << endl;
	cout << *(ptr + 1) << endl;
	cout << *(ptr + 2) << endl;
	cout << *(ptr + 3) << endl;

	cout << endl;

	for (int i = 0; i <= 3; i++)
	{
		cout << *(ptr + i) << endl;
	}


	return 0;
}
