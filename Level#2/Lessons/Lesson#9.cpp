// Lesson#9 : - Ternary Operator: Short Hand IF

#include <iostream>
using namespace std;

int main()
{
	int Mark = 60;
	string Result;

	//Normal If
	/*
	if (Mark >= 50)
	{
		Result = "PASS";
	}
	else
	{
		Result = "FAIL";
	}
	*/

	//Using Short Hand If
	Result = (Mark >= 50) ? "PASS" : "FAIL";

	cout << Result << endl;
	return 0;

}