#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

enum enElementType { Positive = 1, Negative = 2, Odd = 3, Even = 4 };

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

short int RandomNumber(short int from, short int to)
{
	short RandNum = rand() % (to - from + 1) + from;
	return RandNum;
}

void FillArrayElementsWithRandomNumbers(int Array[], short int Length)
{
	for (short i = 0; i < Length; i++)
		Array[i] = RandomNumber(-100, 100);
}

void PrintArrayElements(int Array[], short int Length)
{
	for (short i = 0; i < Length; i++)
		cout << Array[i] << " ";

	cout << endl;
}

enElementType ReadNumType()
{
	short x;
	cout << "\nWhat Type Of Numbers Do you Want to Cout?\n";
	cout << "[1] Positive\n" << "[2] Negative\n" << "[3] Odd\n" << "[4] Even\n";
	cout << "Enter: ";
	cin >> x;

	return enElementType(x);
}

bool IsOdd(short int Num)
{
	return Num % 2 != 0;
}

bool IsPositive(short int Num)
{
	return Num >= 0;
}

short int CountElementsInArray(int Array[], short int Length, enElementType UserInput)
{
	short Counter = 0;
	for (short i = 0; i < Length; i++)
	{
		switch (UserInput)
		{
		case enElementType::Positive:
			if (IsPositive(Array[i])) Counter++;
			break;
		case enElementType::Negative:
			if (!IsPositive(Array[i])) Counter++;
			break;
		case enElementType::Odd:
			if (IsOdd(Array[i])) Counter++;
			break;
		case enElementType::Even:
			if (!IsOdd(Array[i])) Counter++;
			break;
		}
	}

	return Counter;
}

string ElementTypeToString(enElementType UserInput)
{
	switch (UserInput)
	{
	case enElementType::Positive:
		return "Positive";
	case enElementType::Negative:
		return "Negative";
	case enElementType::Odd:
		return "Odd";
	case enElementType::Even:
		return "Even";
	}

	return "";
}

int main()
{
	srand((unsigned)time(NULL));

	int Array[100];
	short Length = ReadPositiveNumber("Enter Array Size?");
	FillArrayElementsWithRandomNumbers(Array, Length);

	cout << "\nArray Elements :\n";
	PrintArrayElements(Array, Length);

	enElementType UserInput = ReadNumType();
	short Counter = CountElementsInArray(Array, Length, UserInput);

	cout << "\n" << ElementTypeToString(UserInput) << " Numbers Count is: " << Counter << endl;

	return 0;
}