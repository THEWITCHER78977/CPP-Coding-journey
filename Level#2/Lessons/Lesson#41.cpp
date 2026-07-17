// Lesson#41 - Pointers and Structure
#include <iostream>

using namespace std;

struct stEmplyee
{
	string Name;
	float Salary;
};

int main()
{
	stEmplyee Emplyee1, * ptr;
	Emplyee1.Name = "Abdelli Ahmed";
	Emplyee1.Salary = 500000;

	cout << Emplyee1.Name << endl;
	cout << Emplyee1.Salary << endl;

	ptr = &Emplyee1;

	cout << "\nUsing Pointers:\n";
	cout << ptr->Name << endl;
	cout << ptr->Salary << endl;

	return 0;
}
