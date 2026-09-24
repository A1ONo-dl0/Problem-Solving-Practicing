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

void PrintPerfectNumbers(int N, enPerfectOrNot Result)
{
	if (Result == enPerfectOrNot::Perfect)
		cout << "\n" << N << " is a Perfect Number" << endl;
	else
		cout << "\n" << N << " is Not a Perfect Number" << endl;

}

int main()
{
	int Number = ReadPositiveNumber("Please,Enter a Number?");
	PrintPerfectNumbers(Number, CheckPerfectOrNot(Number));

	return 0;
}
