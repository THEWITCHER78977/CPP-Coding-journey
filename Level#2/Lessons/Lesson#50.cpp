// Lesson#50 - String Object: (Common Methods)
#include <iostream>
#include<string>

using namespace std;

int main()
{

	string S1 = "My Name is Abdelli Ahmed, I Love Programming.";

	//Print the length of the string 
	cout << S1.length() << endl;

	//Returns the letter at position 3
	cout << S1.at(3) << endl;

	//Adds @ProgrammingAdvices to the end of string
	S1.append(" @ProgrammingAdvices");
	cout << S1 << endl;

	//insert Ali at position 7
	S1.insert(7, " Ali ");
	cout << S1 << endl;

	//Print all the next 8 letters from position 16
	cout << S1.substr(16, 9) << endl;

	//Adds one charachter to the end of the string 
	S1.push_back('X');
	cout << S1 << endl;

	//Removes one cahrachter from the end of the string 
	S1.pop_back();
	cout << S1 << endl;

	//Find Ali in the string(returns Position)
	cout << S1.find("Ali") << endl;
	
	//Find ali in the string
	cout << S1.find("ali") << endl;

	if (S1.find("ali")==S1.npos)
	{
		cout << "ali is not foudnd";
	}

	//clear all string letters
	S1.clear();
	cout << S1 << endl;



	return 0;
}
