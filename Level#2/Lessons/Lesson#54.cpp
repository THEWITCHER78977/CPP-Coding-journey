// Lesson#54 - Read Mode: Print File Content
#include <iostream>
#include<fstream>
#include<string>

using namespace std;

void PrintFileContenet(string FileName)
{
	fstream MyFile;

	MyFile.open(FileName, ios::in);//Read Mode

	if (MyFile.is_open())
	{
		string Line;

		while (getline(MyFile, Line))
		{
			cout << Line << endl;
		}

		MyFile.close();
	}
}

int main()
{
	PrintFileContenet("MyFile.txt");
	return 0;
}