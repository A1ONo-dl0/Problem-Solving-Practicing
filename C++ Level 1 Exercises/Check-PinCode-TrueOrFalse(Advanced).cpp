#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int num;
	do
	{
		cout << Message << "\n";
		cout << "Enter: ";
		cin >> num;
		if (num <= 0)
			cout << "\nWrong,Please Enter Positive Number.\n\n";

	} while (num <= 0);

	return num;
}

bool CheckPinCode()
{
	int PinCode;
	for (short int i = 3; i >= 1; i--)
	{
		PinCode = ReadPositiveNumber("Please,Enter Pin Code?");

		if (PinCode == 1234)
			return true;
		else
		{
			cout << "\nWrong Pin,You Have "<<i-1<<" Try\n\n";
			system("color 4F");
		}
	}

	return false;
}

int main()
{
	if (CheckPinCode())
	{
		system("color 2F");
		cout << "\nYour Balance is: 7500" << endl;
	}
	else
		cout << "\nYour Card is Blocked Call The Bank For Help" << endl;

	return 0;
}