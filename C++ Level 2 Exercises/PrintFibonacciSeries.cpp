#include <iostream>
#include <string>
using namespace std;

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

void PrintFibonacciSeries(short NumOfSeries)
{
	short FibNum = 1;
	short Prev1 = 0, Prev2 = 1;

	for (short i = 1; i <= NumOfSeries; i++)
	{
		cout << FibNum << "   ";
		FibNum = Prev1 + Prev2;
		Prev1 = Prev2;
		Prev2 = FibNum;
	}
}


int main()
{
	short NumOfSeries = ReadPositiveNumber("Enter Number of Fibonacci Series?");

	PrintFibonacciSeries(NumOfSeries);

	system("pause>0");

	return 0;
}
