// Lesson#56 - Save Vector to File
#include <iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

void SaveVectorToFile(string FileName, vector <string> vFileContent)
{
	fstream MyFile;
	MyFile.open(FileName, ios::out);

	if (MyFile.is_open())
	{
		for (string& Line : vFileContent)
		{
			if (Line != "")
			{
				MyFile << Line << endl;
			}
		}

		MyFile.close();
	}
}

int main()
{
	vector <string> vFileContent{ "Ahmed","Abdrahim","Reidh","Ali","Douaa" };

	SaveVectorToFile("MyFile.txt", vFileContent);
	
	return 0;
}
