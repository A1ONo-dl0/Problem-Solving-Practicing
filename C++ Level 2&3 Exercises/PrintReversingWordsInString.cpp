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

void PrintReverseWordsOfString(string& str)
{
	vector <string> vString;

	vString = SplitStringFillTokensToVector(str, " ");

	vector <string>::iterator iter = vString.end();

	while (iter != vString.begin())
	{
		--iter;
		cout << *iter << " ";
	}
	cout << endl;
}


int main()
{
	string str = ReadString("Enter Your String?");

	cout << "\nString After Reversing Words :\n";
	PrintReverseWordsOfString(str);

	system("pause>0");

	return 0;
}