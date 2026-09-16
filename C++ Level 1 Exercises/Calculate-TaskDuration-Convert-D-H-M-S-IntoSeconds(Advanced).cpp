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

int TaskDurationInSeconds(stTypeOfTimes& Time)
{
	int TDurationInSeconds;
	TDurationInSeconds = Time.Days * 60 * 60 * 24;
	TDurationInSeconds += Time.Hours * 60 * 60;
	TDurationInSeconds += Time.Minutes * 60;
	TDurationInSeconds += Time.Seconds;

	return TDurationInSeconds;
}

int main()
{
	stTypeOfTimes Time;
	Time.Days = ReadPositiveNumber("Please,Enter Number Of Days?");
	Time.Hours = ReadPositiveNumber("Please,Enter Number Of Hours?");
	Time.Minutes = ReadPositiveNumber("Please,Enter Number Of Minutes?");
	Time.Seconds = ReadPositiveNumber("Please,Enter Number Of Seconds?");

	/* او جعل قراءة الاوقات بفانكشن منفصلة افضل لتقليل الكود في المين
	* وطباعة الاوقات ايضا بفانكشن منفصل
	* كله نفس الشي لكن ارتب
	* لأنه ايضا رح نقرأ الاوقات بأستخدام ستركجر وايضا نطبع بفويد بعد القراءة
	* كله بستركجر
	*/

	cout << "\n***********************************\n";
	cout << "Number of Days: " << Time.Days << endl;
	cout << "Number of Hours: " << Time.Hours << endl;
	cout << "Number of Minutes: " << Time.Minutes << endl;
	cout << "Number of Seconds: " << Time.Seconds << endl;
	cout << "***********************************\n";
	cout << "Task Duration in Seconds: " << TaskDurationInSeconds(Time) << endl;

	return 0;
}