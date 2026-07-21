
// Lesson#55 - Load Data From File to Vector
#include <iostream>
#include<vector>
#include<fstream>
#include<string>

using namespace std;

void LoadDataFromFileToVector(string FileName, vector<string>& vFileContent)
{
	fstream MyFile;
	MyFile.open(FileName, ios::in);//Read More

	if (MyFile.is_open())
	{
		string Line;

		while (getline(MyFile, Line))
		{
			vFileContent.push_back(Line);
		}

		MyFile.close();
	}
}

int main()
{
	vector <string> vFileContent;

	LoadDataFromFileToVector("MyFile.txt", vFileContent);

	for (string& Line : vFileContent)
	{
		cout << Line << endl;
	}

	return 0;
}
