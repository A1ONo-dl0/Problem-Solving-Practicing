#include <iostream>
#include <cmath>
#include <string>
using namespace std;

enum enPrimeOrNot { Prime = 1, NOtPrime = 2 };

int ReadPositiveNumber(string Message)
{
	int num;
	do
	{
		cout << Message << "\n";
		cout << "Enter: ";
		cin >> num;
		if (num <= 0)
			cout << "\nWromg,Please Enter a Positive Number.\n\n";
	} while (num <= 0);

	return num;
}

enPrimeOrNot CheckPrimeOrNot(int num)
{
	if (num <= 1)
		return enPrimeOrNot::NOtPrime;

	int M = round(sqrt(num));
	for (short int i = 2; i <= M; i++)
	{
		if (num % i == 0)
			return enPrimeOrNot::NOtPrime;
	}

	return enPrimeOrNot::Prime;
}

void PrintPrimeNum(int N)
{
	cout << "\nPrime Numbers From 1 To " << N << " : " << endl;
	for (short int i = 1; i <= N; i++)
	{
		if (CheckPrimeOrNot(i) == enPrimeOrNot::Prime)
			cout << i << endl;
	}
}

int main()
{
	int N = ReadPositiveNumber("Please,Enter a Number?");
	PrintPrimeNum(N);

	return 0;
}