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

int ReverseDigitNum(int num)
{
	int Remainder = 0;
	int Num2 = 0;
	while (num > 0)
	{
		Remainder = num % 10;
		num = num / 10;
		Num2 = Num2 * 10 + Remainder;
	}
	return Num2;
}

int main()
{
	int Number = ReadPositiveNumber("Please,Enter a Number?");
	cout << "\nNumber Reversed: " << ReverseDigitNum(Number) << endl;

	return 0;
}
