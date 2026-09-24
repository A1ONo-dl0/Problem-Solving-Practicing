#include <iostream>
#include <string>
using namespace std;

enum enPerfectOrNot { Perfect = 1, NotPerfect = 2 };

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

enPerfectOrNot CheckPerfectOrNot(int num)
{
	int sum = 0;
	for (short int i = 1; i < num; i++)
	{
		if (num % i == 0)
			sum += i;
	}
	if (sum == num)
		return enPerfectOrNot::Perfect;
	else
		return enPerfectOrNot::NotPerfect;
}

void PrintPerfectNumbers(int num)
{
	cout << "\nPerfect Numbers From 1 to " << num << " : " << endl;
	for (short int i = 1; i <= num; i++)
	{
		if (CheckPerfectOrNot(i) == enPerfectOrNot::Perfect)
			cout << i << endl;
	}
}

int main()
{
	int Number = ReadPositiveNumber("Please,Enter a Number?");
	PrintPerfectNumbers(Number);

	return 0;
}
