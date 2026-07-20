// Lesson#51 - Some CCTYPE Functions
#include <iostream>
#include<string>
#include<cctype>

using namespace std;

int main()
{
	char x;
	char w;

	x = toupper('a');
	w = tolower('A');

	cout << "Converting a to A: " << x << endl;
	cout << "Converting A to a: " << w << endl;

	// upper (A to Z)
	// returns zero if not, and non zero if yes
	cout << "isupper('A') " << isupper('a') << endl;

	// lower (a to z)
	// returns zero if not, and non zero if yes
	cout << "islower('a') " << islower('a') << endl;

	// Digits (0 to 9)
	// returns zero if not, and non zero if yes
	cout << "isdigit('9') " << isdigit('9') << endl;


	// punctuation charachter are +"*%&/()=?`;;_><,.-¦@#°§¬|¢´~[]}{\
	// returns zero if not, and non zero if yes
	cout << "ispunct('A') " << ispunct(';') << endl;
	return 0;
}
