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

bool IsVowel(char& Letter)
{
	char CharArr[5] = { 'a','e','i','o','u' };

	for (short i = 0; i < 5; i++)
	{
		if (Letter == toupper(CharArr[i]) || Letter == tolower(CharArr[i]))
			return true;
	}
	return false;
}

void PrintAllVowelsInString(string& str)
{
	for (short i = 0; i < str.length(); i++)
	{
		if (IsVowel(str[i]))
			cout << str[i] << "  ";
	}
}

int main()
{
	string str = ReadString("Enter a String?");

	cout << "\nVowels are : " << "a,e,i,o,u" << endl;

	cout << "\nVowels in String are : ";
	PrintAllVowelsInString(str);

	system("pause>0");

	return 0;
}