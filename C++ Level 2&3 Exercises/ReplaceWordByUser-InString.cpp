#include <iostream>
#include <string>
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

vector <string> SplitStringFillTokensToVector(string str, string delim)
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

string ReplaceWordInString(vector <string> vString)
{
	string s = "";

	string OrgWord = "", NewWord = "";
	cout << "\n\nOriginal Word To Replace: ";
	cin >> OrgWord;
	cout << "Repalce With: ";
	cin >> NewWord;

	for (short i = 0; i < vString.size(); i++)
	{
		if (vString[i] == OrgWord)
		{
			s += vString[i] = NewWord;
			s += " ";
		}
		else
			s += vString[i] + " ";
	}

	cout << "\nString After Replace :\n";

	return s;
}

void PrintVectorString(const vector <string>& vString)
{
	for (const string& str : vString)
	{
		cout << str << " ";
	}
}

int main()
{
	string str = ReadString("Enter Your String?");
	system("cls");

	vector <string> vString;
	vString = SplitStringFillTokensToVector(str, " ");

	cout << "Original String :\n";
	PrintVectorString(vString);

	cout << ReplaceWordInString(vString) << endl;


	system("pause>0");

	return 0;
}