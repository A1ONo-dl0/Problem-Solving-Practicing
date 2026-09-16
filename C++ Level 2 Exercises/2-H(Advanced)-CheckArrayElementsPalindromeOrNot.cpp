#include <iostream>
#include <string>
#include <cmath>
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

void FillArrayElements(int Array[], int& Length)
{

	for (short i = 0; i < Length; i++)
	{
		cout << "Array [" << i << "] : ";
		cin >> Array[i];
	}
}

bool CheckArrayElementsIsPalidrome(int Array[], int Length)
{
	for (short i = 0; i < Length / 2; i++)
	{
		if (Array[i] != Array[Length - 1 - i])
			return false;
	}

	return true;
}

void PrintArrayElements(int Array[], int Length)
{
	cout << "\nArray Elements: \n";
	for (short i = 0; i < Length; i++)
		cout << Array[i] << " ";
}

int main()
{
	int Array[100], Length = 0;
	Length = ReadPositiveNumber("Enter Array Size?");
	FillArrayElements(Array, Length);

	PrintArrayElements(Array, Length);

	if (CheckArrayElementsIsPalidrome(Array, Length))
		cout << "\n\nyes Array is Palindrome" << endl;
	else
		cout << "\n\nNo Array is Not Palindrome" << endl;
	return 0;
}