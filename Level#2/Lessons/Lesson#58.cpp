// Lesson#57 - Delete Record From File
#include <iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

void LoadDataFromFileToVector(string FileName, vector <string>& vFileContent)
{
	fstream MyFile;
	MyFile.open("MyFile.txt", ios::in);//Read Mode

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

void SaveVectorToFile(string FileName, vector <string> vFileContent)
{
	fstream MyFile;
	MyFile.open(FileName, ios::out);//write Mode

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

void DeleteRecordFromFile(string FileName, string Record, string UpdateTo)
{
	vector <string> vFileContent;
	LoadDataFromFileToVector(FileName, vFileContent);

	for (string& Line : vFileContent)
	{
		if (Line == Record)
		{
			Line = UpdateTo;
		}
	}

	SaveVectorToFile(FileName, vFileContent);
}

void PrintFileContent(string FileName)
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
	cout << "File Content Befor Delete.\n";
	PrintFileContent("MyFile.txt");

	DeleteRecordFromFile("MyFile.txt", "Ali", "Omar");

	cout << "\n\nFile Content after Delete.\n";
	PrintFileContent("MyFile.txt");

	return 0;
}
