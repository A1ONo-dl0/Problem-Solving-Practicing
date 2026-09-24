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

int ReversNumber(int num)
{
	int Remainder = 0, num2 = 0;
	while (num > 0)
	{
		Remainder = num % 10;
		num = num / 10;
		num2 = num2 * 10 + Remainder;
	}

	return num2;
}

bool CheckIsPalindromeOrNot(int num)
{
	return num == ReversNumber(num);
}


int main()
{
	int Number = ReadPositiveNumber("Please,Enter a First Number?");
	if (CheckIsPalindromeOrNot(Number))
		cout << "\nyes, it is a Palindrome Number" << endl;
	else
		cout << "\nNo,it is Not a Plaindrome Number" << endl;


	return 0;
}
