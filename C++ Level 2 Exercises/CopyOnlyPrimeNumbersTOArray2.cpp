#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
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

short int RandomNumber(int from, int to)
{
	short RandNum = rand() % (to - from + 1) + from;
	return RandNum;
}

void FillArrayWithRandomNumber(int Array[], int Length)
{
	for (short i = 0; i < Length; i++)
		Array[i] = RandomNumber(1, 100);
}

bool IsPrime(int Num)
{
	//او حلها بطريقة الاينم
	if (Num <= 1)
		return false;
	short M = round(sqrt(Num));

	for (short i = 2; i <= M; i++)
	{
		if (Num % i == 0)
			return false;
	}

	return true;
}

void AddArrayElements(int Num, int Array2[], int& Length2)
{
	Array2[Length2] = Num;
	Length2++;
}

void CopyPrimeArrayElementsUsingAddArrayElements(int OriginalArray[], int Array2[], int Length, int& Length2)
{
	for (short i = 0; i < Length; i++)
	{
		if (IsPrime(OriginalArray[i]))
			AddArrayElements(OriginalArray[i], Array2, Length2);
	}
}

void PrintArrayElements(int Array[], int Length)
{
	if (Length == 0)
		cout << "\nTher is No Prime Number in Array 1 :-(";
	else
		for (short i = 0; i < Length; i++)
			cout << Array[i] << " ";

	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	int Array[100], Array2[100];
	int ArrayLength = ReadPositiveNumber("Please,Enter Size of Array?");
	int Array2Length = 0;
	FillArrayWithRandomNumber(Array, ArrayLength);
	CopyPrimeArrayElementsUsingAddArrayElements(Array, Array2, ArrayLength, Array2Length);

	cout << "\nArray 1 Elements: \n";
	PrintArrayElements(Array, ArrayLength);

	cout << "\nArray 2 Prime Numbers: \n";
	PrintArrayElements(Array2, Array2Length);

	return 0;
}
