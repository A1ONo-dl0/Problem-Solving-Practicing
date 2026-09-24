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
			cout << "\nWrong,Please Enter DigitsArray Positive Number.\n\n";
	} while (num <= 0);

	return num;
}

int DigitStoreInArray(int num, int DigitsArray[])
{
	int Remainder = 0;
	int Counter = 0;
	while (num > 0)
	{
		Remainder = num % 10;
		num = num / 10;
		DigitsArray[Counter] = Remainder;
		Counter++;
	}

	return Counter;
}

void SortArrayInOrder(int DigitsArray[], int Size)
{
	int temp;
	for (short i = 0; i < Size - 1; i++)
		for (short j = i + 1; j < Size; j++)
			if (DigitsArray[i] > DigitsArray[j])
			{
				temp = DigitsArray[i];
				DigitsArray[i] = DigitsArray[j];
				DigitsArray[j] = temp;
			}

}

void PrintDigitByOrder(int DigitsArray[], int Size)
{
	cout << endl;
	for (short i = 0; i < Size; i++)
	{
		cout << DigitsArray[i];
	}
	cout << endl;
}

int main()
{
	int Number = ReadPositiveNumber("Please,Enter a Number?");
	int DigitsArray[10];
	int StoreIntoArrayAndCounter = DigitStoreInArray(Number, DigitsArray);
	SortArrayInOrder(DigitsArray, StoreIntoArrayAndCounter);
	PrintDigitByOrder(DigitsArray, StoreIntoArrayAndCounter);

	return 0;
}
