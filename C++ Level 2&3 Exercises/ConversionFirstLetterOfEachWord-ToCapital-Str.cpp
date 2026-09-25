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

void PrintString(string str)
{
	cout << str << endl;
}

//Converison First Letter Of Each Word To Upper Or To Lower

void ConverisonFirstLetterOfEachWordToUpper(string& str)
{
	bool IsFirstLetter = true;

	for (short i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ' && IsFirstLetter)
		{
			str[i] = toupper(str[i]);
		}
		IsFirstLetter = (str[i] == ' ' ? true : false);
	}
}

int main()
{
	string str = ReadString();

	ConverisonFirstLetterOfEachWordToUpper(str);

	cout << "\nAfter Conversion :\n";
	PrintString(str);

	system("pause>0");

	return 0;
}