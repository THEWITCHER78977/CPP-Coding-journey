// HomeWork#5
#include <iostream>
#include<vector>

using namespace std;

void ReadNumber(vector <int>& vNumbers)
{
	char ReadMore = 'Y';
	int Number;

	while (ReadMore == 'Y' || ReadMore == 'y')
	{
		cout << "Please Enter a number? ";
		cin >> Number;

		vNumbers.push_back(Number);

		cout << "\n Do you want to read more Numbers Y/N ?";
		cin >> ReadMore;
	}
}

void PrintVectorNumbers(vector <int>& vNumbers)
{
	cout << "Numbers vector : \n\n";

	for (int Number:vNumbers)
	{
		cout << Number << endl;
	}

	cout << endl;
}

int main()
{
	vector <int> vNumbers;

	ReadNumber(vNumbers);
	PrintVectorNumbers(vNumbers);
	
	return 0;
}
