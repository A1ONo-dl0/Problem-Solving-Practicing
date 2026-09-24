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
			cout << "\nWrong,Please Enter a Positive Number.\n\n";
	} while (num <= 0);

	return num;
}

int SumOfDigits(int num)
{
	int Remainder = 0, sum = 0;
	while (num > 0)
	{
		Remainder = num % 10;
		num = num / 10;
		sum += Remainder;
	}

	return sum;
}

void PrintSumOfDigits(int Result)
{
	cout << "\nSummation of Digits is = " << Result << endl;
}

int main()
{
	int Number = ReadPositiveNumber("Please,Enter a Number?");
	int Result = SumOfDigits(Number);
	PrintSumOfDigits(Result);


	return 0;
}
