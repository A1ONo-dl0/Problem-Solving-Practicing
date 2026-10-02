#include <iostream>
#include <string>
using namespace std;

string ReadString(string message)
{
	string str;
	cout << message << "\n";
	cout << "Enter: ";
	getline(cin, str);

	return str;
}

string ReplaceWordInString(string str)
{
	string OrgWord = "", NewWord = "";
	cout << "\n\nOriginal Word To Replace: ";
	cin >> OrgWord;
	cout << "Repalce With: ";
	cin >> NewWord;

	short pos = str.find(OrgWord);

	while (pos != std::string::npos)
	{
		str = str.replace(pos, OrgWord.length(), NewWord);
		pos = str.find(OrgWord);
	}

	cout << "\n\nString After Replace :\n";

	return str;
}

int main()
{
	string str = ReadString("Enter Your String?");
	system("cls");

	cout << "Original String :\n";
	cout << str << endl;

	cout<< ReplaceWordInString(str) << endl;

	
	system("pause>0");

	return 0;
}
