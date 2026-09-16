#include <iostream>
#include <string>
using namespace std;

enum enWhatDay { Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7 };


short int ReadPositiveNumber(string Message)
{
	short int num;
	do
	{
		cout << Message << "\n";
		cout << "Enter: ";
		cin >> num;
		if (num <= 0)
			cout << "\nWrong,Please Enter a Positive Number.\n\n";

		if (num > 7)
			cout << "\nWrong,Please Enter a Correct Number of day.\n\n";

	} while (num <= 0 || num > 7);

	return num;
}

string CheckNumOfDay(short int NumOfDay)
{
	enWhatDay Day = (enWhatDay)NumOfDay;
	switch (Day)
	{
	case enWhatDay::Sunday:
		return "Sunday";
	case enWhatDay::Monday:
		return "Monday";
	case enWhatDay::Tuesday:
		return "Tuesday";
	case enWhatDay::Wednesday:
		return "Wednesday";
	case enWhatDay::Thursday:
		return "Thursday";
	case enWhatDay::Friday:
		return "Friday";
	case enWhatDay::Saturday:
		return "Saturday";

	default:
		return "***";
	}
}

void PrintDay(string Day)
{
	cout << "\nits " << Day << endl;
}

void PrintLetters()
{
	for (short int i = 65; i <= 90; i++)
	{
		cout << char(i) << "\n";
	}
}

int main()
{
	short int NumOfDay = ReadPositiveNumber("Please,Enter Number Of Day?");
	string WhatDay = CheckNumOfDay(NumOfDay);
	PrintDay(WhatDay);
	cout << "\n********************************\n";
	PrintLetters();
	cout << endl;

	return 0;
}