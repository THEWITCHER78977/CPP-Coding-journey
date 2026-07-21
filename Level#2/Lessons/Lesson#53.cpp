// Lesson#53 - Append Mode: Append Data to File
#include <iostream>
#include<fstream>

using namespace std;

int main()
{
	fstream MyFile;

	MyFile.open("MyFile.txt", ios::out | ios::app);//Append Mode And Write Mode

	if (MyFile.is_open())
	{
		MyFile << "Hi, this is a new line \n";
		MyFile << "Hi, this is another one \n";

		MyFile.close();

	}

	return 0;
}