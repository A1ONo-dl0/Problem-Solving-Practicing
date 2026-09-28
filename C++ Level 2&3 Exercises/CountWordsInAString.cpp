#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string ReadString(const string& message)
{
	string str;
	cout << message << "\n";
	cout << "Enter: ";
	getline(cin, str);

	return str;
}

short CountWordsInString(string str)
{
	string delim = " ";
	string sWord;
	short Pos = 0, Counter = 0;

	while ((Pos = str.find(delim)) != std::string::npos)
	{
		sWord = str.substr(0, Pos);

		if (sWord != "")
		{
			Counter++;
		}

		str.erase(0, Pos + delim.length());
	}

	if (str != "")
	{
		Counter++;
	}

	return Counter;
}

int main()
{
	string str = ReadString("Enter a String?");

	cout << "\nCount Of Words In Your String is = " << CountWordsInString(str) << endl;

	system("pause>0");

	return 0;
}