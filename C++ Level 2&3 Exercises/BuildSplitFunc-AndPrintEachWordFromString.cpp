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

vector <string> SplitWordsFromString(string str, string delim)
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

void PrintEachWordOfString(const vector <string>& vString)
{
	for (const string& str : vString)
	{
		cout << str << endl;
	}
}

int main()
{
	vector <string> vString;

	vString = SplitWordsFromString(ReadString("Enter Your String"), " ");

	cout << "\nTokens =" << vString.size() << endl;

	PrintEachWordOfString(vString);

	system("pause>0");

	return 0;
}
