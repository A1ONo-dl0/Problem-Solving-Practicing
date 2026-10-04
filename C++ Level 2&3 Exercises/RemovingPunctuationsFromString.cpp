#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string ReadString(string message)
{
	string str;
	cout << message << "\n";
	cout << "Enter: ";
	getline(cin, str);

	return str;
}

string RemovePunctuationsFromString(string& str)
{
	string s = "";
	for (short i = 0; i < str.length();i++)
	{
		if (!ispunct(str[i]))
			s += str[i];
	}

	return s;
}

int main()
{
	string str = ReadString("Enter Your String?");
	system("cls");

	cout << "Original String :\n";
	cout << str << endl;

	cout << "\nAfter Removing Punctuations :\n";
	cout << RemovePunctuationsFromString(str) << endl;

	system("pause>0");

	return 0;
}
