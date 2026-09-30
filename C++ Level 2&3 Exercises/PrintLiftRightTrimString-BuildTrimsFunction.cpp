#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string ReadString(string message)
{
	string str;
	cout << message << "\n";
	cout << "Enter: ";
	getline(cin, str);

	return str;
}

string LiftTrim(string str)
{
	for (short i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ')
			return str.substr(i, str.length() - 1);
	}
	return "";
}

string RightTrim(string str)
{
	for (short i = str.length(); i >= 0; i--)
	{
		if (str[i] != ' ')
			return str.substr(0, i + 1);
	}

	return "";
}

string Trim(string str)
{
	return (LiftTrim(RightTrim(str)));
}

int main()
{
	string str = ReadString("Enter Your String?");

	cout << "\nLift Trim" << setw(5) << "= " << LiftTrim(str) << endl;
	cout << "Right Trim" << setw(4) << "= " << RightTrim(str) << endl;
	cout << "Trim" << setw(10) << "= " << Trim(str) << endl;

	system("pause>0");

	return 0;
}