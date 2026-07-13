// Lesson#30 - Vector of Structure
#include <iostream>
#include<vector>

using namespace std;

struct stEmployee
{
	string FirstName;
	string LastName;
	float Salary;
};

int main()
{
	vector <stEmployee> vEmployees;

	stEmployee tempEmployee;

	tempEmployee.FirstName = "Ahmed";
	tempEmployee.LastName = "Abdelli";
	tempEmployee.Salary = 50000;

	vEmployees.push_back(tempEmployee);

	tempEmployee.FirstName = "abdrahim";
	tempEmployee.LastName = "Allem";
	tempEmployee.Salary = 50000;

	vEmployees.push_back(tempEmployee);

	tempEmployee.FirstName = "reidh";
	tempEmployee.LastName = "Azzi";
	tempEmployee.Salary = 50000;

	vEmployees.push_back(tempEmployee);

	for (stEmployee& Employee : vEmployees)
	{
		cout << "First Name :" << Employee.FirstName << endl;
		cout << "Lasr Name  :" << Employee.LastName<< endl;
		cout << "Salary     :" << Employee.Salary << endl;
		cout << endl;
	}

	cout << endl;
	return 0;
}
