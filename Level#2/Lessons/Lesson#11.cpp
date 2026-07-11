// Lesson#11 - Validate Number
#include <iostream>

using namespace std;

int ReadNumebr()
{
	int Number;
	cout << "Pleae ente a number?" << endl;
	cin >> Number;

	while (cin.fail())
	{
		// user didn't input a number
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "Invalid Number, Enter a valid one" << endl;

		cin >> Number;
	}

	return Number;
}

int main()
{
	int Number = ReadNumebr();
	cout << "Your Number is: " << Number;
	return 0;
}
