// Lesson#26 - Setw Manipulator
#include <iostream>
#include<iomanip> // this Library stored std::setw(set width)
using namespace std;

int main()
{
	cout << "---------|--------------------------------|---------|" << endl;
	cout << "   code  |                name            |   Mark  |" << endl;
	cout << "---------|--------------------------------|---------|" << endl;

	cout << setw(9) << "C101" << "|" << setw(32) << "introduction to progrramming 1" << "|" << setw(9) << "95" << "|" << endl;
	cout << setw(9) << "C102" << "|" << setw(32) << "computer Hardware" << "|" << setw(9) << "85" << "|" << endl;
	cout << setw(9) << "C102334" << "|" << setw(32) << "NetWork" << "|" << setw(9) << "75" << "|" << endl;
	cout << "---------|--------------------------------|---------|" << endl;

	return 0;
}
