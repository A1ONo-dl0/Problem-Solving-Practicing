#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string ReadString()
{
	string str;
	cout << "Enter a String?\n";
	cout << "Enter: ";
	getline(cin, str);

	return str;
}

char UserInputChar(const string& message)
{
	char c;

	do
	{
		cout << message << "\n";
		cout << "Enter: ";
		cin >> c;

		if (isdigit(c))
		{
			cout << "\nInvalied Input!, Please Enter a Valied One\n\n";
		}
	} while (isdigit(c));

	return c;
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

int main()
{
	char c = UserInputChar("Enter a Character?");

	cout << "\nVowels are : " << "a,e,i,o,u" << endl;

	IsVowel(c) ? cout << "\nYES , Letter '" << c << "' is Vowel" << endl : cout << "\nNo , Letter '" << c << "' is Not Vowel" << endl;


	system("pause>0");

	return 0;
}