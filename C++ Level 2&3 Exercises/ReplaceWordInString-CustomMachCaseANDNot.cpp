#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

string ReadString(string message)
{
	string str;
	cout << message << "\n";
	cout << "Enter: ";
	getline(cin, str);

	return str;
}

vector <string> SplitStringFillVectorWithTokens(string str, string delim)
{
	vector <string> vString;
	string sWord = "";
	short pos = 0;

	while ((pos = str.find(delim)) != std::string::npos)
	{
		sWord = str.substr(0, pos);
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		str.erase(0, pos + delim.length());
	}
	if (str != "")
	{
		vString.push_back(str);
	}
	return vString;
}

string JoinString(vector <string> vString, string delim)
{
	string str = "";
	for (string& s : vString)
	{
		str += s + delim;
	}

	return str.substr(0, str.length() - delim.length());
}

string ToLower(string Word)
{
	for (short i = 0; i < Word.length(); i++)
	{
		Word[i] = tolower(Word[i]);
	}
	return Word;
}

string ReplaceWordInString(string& str, string& OrgWord, string& NewWord, bool MachCase = true)
{
	vector <string> vString;
	vString = SplitStringFillVectorWithTokens(str, " ");

	for (short i = 0; i < vString.size(); i++)
	{
		if (MachCase)
		{
			if (vString[i] == OrgWord)
				vString[i] = NewWord;
		}
		else
		{
			if (ToLower(vString[i]) == ToLower(OrgWord))
				vString[i] = NewWord;
		}
	}

	return JoinString(vString, " ");
}

int main()
{
	string str = ReadString("Enter Your String?");
	system("cls");

	cout << "Original String :\n";
	cout << str << endl;

	string OrgWord = "", NewWord = "";
	cout << "\nOriginal Word To Replace: ";
	cin >> OrgWord;
	cout << "Repalce With: ";
	cin >> NewWord;

	cout << "\n\nReplace With Mach Case :\n";
	cout << ReplaceWordInString(str, OrgWord, NewWord) << endl;

	cout << "\nReplace With Out Mach Case :\n";
	cout << ReplaceWordInString(str, OrgWord, NewWord, false) << endl;


	system("pause>0");

	return 0;
}