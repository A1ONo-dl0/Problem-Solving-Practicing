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

void PrintDigitReversed(int num)
{
	cout << "**********************************\n";
	int Remainder = 0;
	while (num > 0)
	{
		Remainder = num % 10;
		num = num / 10;
		cout << Remainder << endl;
	}
}

int main()
{
	PrintDigitReversed(ReadPositiveNumber("Please,Enter a Number?"));
	return 0;
}