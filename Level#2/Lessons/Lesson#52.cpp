// Lesson#52 - Write Mode: Write Data To File
#include <iostream>
#include<fstream>

using namespace std;

int main()
{
	fstream MyFile;

	MyFile.open("MyFile.txt", ios::out);//Write Mode

	if (MyFile.is_open())
	{

		MyFile << "Abdelli ";
		MyFile << "ahmed ";
		MyFile << "Allem\n";
		MyFile << "Abdrahim\n";
		MyFile << "reidh\n";
		MyFile << "Azzi\n";

		MyFile.close();

	}

	return 0;
}
