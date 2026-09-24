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
			cout << "\nWrong,Please,Enter a Positive Number\n\n";
	} while (num <= 0);

	return num;
}

void PrintNumberInvertedPattern(int num)
{
	cout << endl;
	for (short i = 65 + num - 1; i >= 65; i--)
	{
		for (short j = 65; j <= i; j++)
		{
			cout << (char)i;
		}
		cout << "\n";
	}

}

//اي واحد منهم يظبط عادي

void PrintNumber2InvertedPattern(int num)
{
	cout << endl;
	for (short i = num; i >= 1; i--)
	{
		for (short j = 1; j <= i; j++)
		{
			cout << char(i + 64);
		}
		cout << "\n";
	}

}

int main()
{
	int Number = ReadPositiveNumber("Please,Enter a Number?");
	PrintNumberInvertedPattern(Number);

	return 0;
}
