#include <iostream>
#include <string>
using namespace std;

struct stTypeOfTimes
{
	int Seconds, Minutes, Hours, Days;
};

int ReadPositiveNumber(string Message)
{
	int num;
	do
	{
		cout << Message << "\n";
		cout << "Enter: ";
		cin >> num;
		if (num <= 0)
			cout << "\nWrong,Please Enter a Positive Number.\n\n";
	} while (num <= 0);

	return num;
}

stTypeOfTimes CalculateDays_Hours_Minutes_Seconds(int TSec)
{
	int Remainder;
	stTypeOfTimes Time;
	const int SecondsPerDay = 60 * 60 * 24;
	const int SecondsPerHour = 60 * 60;
	const int SecondsPerMinute = 60;

	Time.Days = (TSec / SecondsPerDay);
	Remainder = TSec % SecondsPerDay;

	Time.Hours = (Remainder / SecondsPerHour);
	Remainder = Remainder % SecondsPerHour;

	Time.Minutes = (Remainder / SecondsPerMinute);
	Time.Seconds = Remainder % SecondsPerMinute;

	return Time;
}

void PrintResult(stTypeOfTimes Time)
{
	cout << "\n" << Time.Days << "D:" << Time.Hours << "H:" << Time.Minutes << "M:" << Time.Seconds << "S" << endl;
}

int main()
{
	int TotalSecond = ReadPositiveNumber("Please,Enter Total Seconds?");
	stTypeOfTimes Calculate_DHMS = CalculateDays_Hours_Minutes_Seconds(TotalSecond);
	PrintResult(Calculate_DHMS);

	return 0;
}