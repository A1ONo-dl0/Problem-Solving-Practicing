#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

enum enOddOrEven { Odd = 1, Even = 2 };

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

short int RandomNumber(int from, int to)
{
	short RandNum = rand() % (to - from + 1) + from;
	return RandNum;
}

void FillArrayElementsWithRandomNumbers(int Array[], int Length)
{
	for (short i = 0; i < Length; i++)
		Array[i] = RandomNumber(1, 100);
}

void PrintArrayElements(int Array[], int Length)
{
	for (short i = 0; i < Length; i++)
		cout << Array[i] << " ";

	cout << endl;
}

bool IsOdd(int Num)
{
	return Num % 2 != 0;
}

enOddOrEven UserInputMenuEvenOrOdd()
{
	short x;
	cout << "\nWhich Numbers Do you Want to Count?\n";
	cout << "[1] Odd\n" << "[2] Even\n";
	cout << "Enter: ";
	cin >> x;

	return enOddOrEven(x);
}

short int CountElementsInArray(int Array[], int Length, enOddOrEven UserInput)
{
	short Counter = 0;
	for (short i = 0; i < Length; i++)
	{
		if (UserInput == enOddOrEven::Odd && IsOdd(Array[i]))
		{
			Counter++;
		}
		else if (UserInput == enOddOrEven::Even && !IsOdd(Array[i]))
		{
			Counter++;
		}
	}

	return Counter;
}

int main()
{
	srand((unsigned)time(NULL));

	int Array[100], Length = 0;
	Length = ReadPositiveNumber("Enter Array Size?");
	FillArrayElementsWithRandomNumbers(Array, Length);

	cout << "\nArray Elements :\n";
	PrintArrayElements(Array, Length);

	enOddOrEven UserInput = UserInputMenuEvenOrOdd();

	short Counter = CountElementsInArray(Array, Length, UserInput);

	if (UserInput == enOddOrEven::Odd)
		cout << "\nOdd Numbers Count is: " << Counter << endl;
	else
		cout << "\nEven Numbers Count is: " << Counter << endl;

	return 0;
}
