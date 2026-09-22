#include <iostream>
#include <string>
using namespace std;

const short Rows = 3;
const short Cols = 3;

short ReadPositiveNumber(string message)
{
	short num;
	do
	{
		cout << message << "\n";
		cout << "Enter: ";
		cin >> num;

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			cout << "\nInvalid Input! , Please enter a valid number:\n";
			cout << "Enter: ";
			cin >> num;
		}

		if (num <= 0)
			cout << "\nPlease Enter a Number Larger Than 0\n\n";

	} while (num <= 0);

	return num;
}

void PrintFibonacciSeriesUsingRecurssion(short NumOfSeries, short FibNum, short Prev1, short Prev2)
{
	if (NumOfSeries > 0)
	{
		cout << FibNum << "   ";
		FibNum = Prev1 + Prev2;
		Prev1 = Prev2;
		Prev2 = FibNum;
		PrintFibonacciSeriesUsingRecurssion(NumOfSeries - 1, FibNum, Prev1, Prev2);
	}
}


int main()
{
	short NumOfSeries = ReadPositiveNumber("Enter Number of Fibonacci Series?");
	short FibNum = 1;
	short Prev1 = 0, Prev2 = 1;

	PrintFibonacciSeriesUsingRecurssion(NumOfSeries, FibNum, Prev1, Prev2);

	system("pause>0");

	return 0;
}