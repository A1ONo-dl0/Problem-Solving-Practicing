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

short CountLetter(string& str, char& Letter, bool MatchCase = true)
{
	short Counter = 0;

	for (short i = 0; i < str.length(); i++)
	{

		if (MatchCase)
		{
			if (str[i] == Letter)
				Counter++;
		}
		else
		{
			if (toupper(str[i]) == toupper(Letter))
				Counter++;
		}
	}

	return Counter;
}




int main()
{
	string str = ReadString();

	char c = UserInputChar("\nEnter a Character To Count?");

	cout << "\nLetter '" << c << "' Count = " << CountLetter(str, c) << endl;

	cout << "\nLetter '" << char(tolower(c)) << "' Or '" << char(toupper(c)) << "' Count = " << CountLetter(str, c, false);
	system("pause>0");

	return 0;
}
