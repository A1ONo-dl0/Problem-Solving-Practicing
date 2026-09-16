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

int CountDigitFrequency(int num, int CheckDigit)
{
	int Remainder = 0;
	int  FreqDigit = 0;
	while (num > 0)
	{
		Remainder = num % 10;
		num = num / 10;
		if (Remainder == CheckDigit)
			FreqDigit++;
	}

	return FreqDigit;
}

void PrintAllDigitFrequency(int num, int CheckDigit)
{
	cout << "\nDigit " << CheckDigit << " Frequency is " << num << " Times" << endl;
}

int main()
{
	int Number = ReadPositiveNumber("Please,Enter a Number?");\
		int CheckDigit = ReadPositiveNumber("Please,Enter Num Of Digit To Check?");
	PrintAllDigitFrequency(CountDigitFrequency(Number, CheckDigit), CheckDigit);

	return 0;
}