#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string ReadString()
{
	string str = "";
	cout << "Enter Your String?\n";
	getline(cin, str);
	return str;
}

string ConverisonAllWordsOfStringToUpper(string& str)
{
	for (short i = 0; i < str.length(); i++)
	{
		str[i] = toupper(str[i]);
	}
	return str;
}

string ConverisonAllWordsOfStringToLower(string& str)
{
	for (short i = 0; i < str.length(); i++)
	{
		str[i] = tolower(str[i]);
	}
	return str;
}

int main()
{
	string str = ReadString();

	cout << "\nString After Conversion To Upper:\n";
	cout << ConverisonAllWordsOfStringToUpper(str) << endl;


	cout << "\nString After Conversion To Lower:\n";
	cout << ConverisonAllWordsOfStringToLower(str) << endl;


	system("pause>0");

	return 0;
}