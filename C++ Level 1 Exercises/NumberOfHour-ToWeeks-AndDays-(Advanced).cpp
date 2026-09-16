#include <iostream>
using namespace std;

float ReadPositiveNumebr(string Message)
{
	float num;
	do
	{
		cout << Message << "\n";
		cout << "Enter: ";
		cin >> num;

		if (num < 0)
			cout << "\nWrong,Please Enter a Poitive Number.\n\n";
	} while (num < 0);

	return num;
}

float HoursToDays(float num)
{
	return num / 24;
}

float DaysToWeeks(float num)
{
	return num / 7;
}



float main()
{
	float ReadNumOfHour = ReadPositiveNumebr("Please,Enter Number Of Hours?");
	float NumberOfDays = HoursToDays(ReadNumOfHour);
	cout << "\nNumber Of Days: " << NumberOfDays;
	cout << "\nNumber Of Weeks: " << DaysToWeeks(NumberOfDays) << endl;

	return 0;
}