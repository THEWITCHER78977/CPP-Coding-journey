// HomeWork#6.
#include <iostream>
#include<vector>

using namespace std;

struct stEmployee
{
	string FirstName;
	string LastName;
	float Salary;
};

void ReadEmployees(vector <stEmployee>& vEmployees)
{
	char RaedMore = 'Y';
	stEmployee tempEmployee;

	cout << "Employees Infor" << endl;

	while (RaedMore == 'Y' || RaedMore == 'y')
	{
		cout << "Enter First Name : ";
		cin >> tempEmployee.FirstName;
		
		cout << "Enter last Name  : ";
		cin >> tempEmployee.LastName;
		
		cout << "Enter Salary     : ";
		cin >> tempEmployee.Salary;

		vEmployees.push_back(tempEmployee);

		cout << "\n do you want to add More employees Y/N?";
		cin >> RaedMore;
	}
}

void PrintEmployees(vector <stEmployee>& vEmployees)
{
	cout << "\nEmployees Vector: \n\n";

	for (stEmployee& Employee : vEmployees)
	{
		cout << "First Name : " << Employee.FirstName << endl;
		cout << "Last Name  : " << Employee.LastName<< endl;
		cout << "Salary     : " << Employee.Salary << endl;
		cout << endl;
	}
	cout << endl;
}

int main()
{
	vector <stEmployee> vEmployees;

	ReadEmployees(vEmployees);
	PrintEmployees(vEmployees);

	return 0;
}