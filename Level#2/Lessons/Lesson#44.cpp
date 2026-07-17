// Lesson#44 - Dynamic Arrays: new and delete
#include <iostream>

using namespace std;

int main()
{
	int num;
	cout << "Enter total number of Students: ";
	cin >> num;

	float* ptr;

	// memory allocation of num number of floats
	ptr = new float[num];

	cout << "Enter grades of students." << endl;
	for (int i = 0; i < num; i++)
	{
		cout << "Student" << i + 1 << ": ";
		cin >> *(ptr + i);
	}

	cout << "\nDisplay gardes of Students." << endl;
	for (int i = 0; i < num; i++)
	{
		cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
	}

	// ptr memory is released
	delete[]ptr;
	return 0;
}
