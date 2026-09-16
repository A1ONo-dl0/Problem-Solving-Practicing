#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void LoadFileToVectore(vector <string>& vFileContent, string FileName)
{
	fstream MyOwnFile;

	MyOwnFile.open(FileName, ios::in);

	if (MyOwnFile.is_open())
	{
		string Line = "";

		while (getline(MyOwnFile, Line))
		{
			vFileContent.push_back(Line);
		}
		MyOwnFile.close();
	}
}

void SaveVetorToFile(string FileName, vector <string> vFileContent)
{
	fstream MyOwnFile;
	MyOwnFile.open(FileName, ios::out);

	if (MyOwnFile.is_open())
	{
		string Line = "";

		for (string& Line : vFileContent)
		{
			if (Line != "")
				MyOwnFile << Line << endl;
		}

		MyOwnFile.close();
	}

}

void UpdateRecordInFile(string FileName, string Record, string UpdateTo)
{
	vector <string> vFileContent;
	vector <string>::iterator iter;
	LoadFileToVectore(vFileContent, FileName);

	for (iter = vFileContent.begin(); iter != vFileContent.end(); iter++)
	{
		if (*iter == Record)
		{
			*iter = UpdateTo;
		}
	}

	SaveVetorToFile("MyOwnFile.txt", vFileContent);
}

void PrintFileContent(string FileName)
{
	fstream MyOwnFile;

	MyOwnFile.open(FileName, ios::in);

	if (MyOwnFile.is_open())
	{
		string Line = "";

		while (getline(MyOwnFile, Line))
		{
			cout << Line << endl;
		}

		MyOwnFile.close();
	}
}

int main()
{
	vector <string> vFileContent = { "Ahmed","Ali","Aws","Qassem","Ibrahim" };

	cout << "Before Delete Record:-\n";
	PrintFileContent("MyOwnFile.txt");

	UpdateRecordInFile("MyOwnFile.txt", "Ali", "Mortada");

	cout << "\nAfter Delete Record:-\n";
	PrintFileContent("MyOwnFile.txt");
	return 0;
}