#include <iostream>
#include <string>
#include <cctype>
using namespace std;

enum enWhatToCount { SmallLetters = 0, CapitalLetters = 1, All = 2 };

string ReadString()
{
	string str;
	cout << "Enter a String?\n";
	cout << "Enter: ";
	getline(cin, str);

	return str;
}

short CountLetters(string& str, enWhatToCount CountType)
{
	short counter = 0;

	switch (CountType)
	{
	case enWhatToCount::All:
		return str.length();

	case enWhatToCount::CapitalLetters:
		for (short i = 0; i < str.length(); i++)
		{
			if (isupper(str[i]))
				counter++;
		}
		return counter;

	case enWhatToCount::SmallLetters:
		for (short i = 0; i < str.length(); i++)
		{
			if (islower(str[i]))
				counter++;
		}
		return counter;
	}

	return 0;
}


int main()
{
	string str = ReadString();

	cout << "\nString Length = " << str.length() << endl;
	cout << "Small Letter Count is = " << CountLetters(str, enWhatToCount::SmallLetters) << endl;
	cout << "Capital Letter Count is = " << CountLetters(str, enWhatToCount::CapitalLetters) << endl;

	system("pause>0");

	return 0;
}