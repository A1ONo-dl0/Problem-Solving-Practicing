#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

enum enIsPrime { Prime = 1, NotPrime = 2 };

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

int RandomNumber(int from, int to)
{
	int RandNum = rand() % (to - from + 1) + from;
	return RandNum;
}

void FillArrayWithRandomNumbers(int array[], int& Size)
{
	Size = ReadPositiveNumber("Enter Size of Array?");

	for (short i = 0; i < Size; i++)
		array[i] = RandomNumber(1, 100);
}

void PrintArray(int array[], int Size)
{
	if (Size == 0)
		cout << "There is NO Prime Number in 2 Array";
	else
		for (short i = 0; i < Size; i++)
			cout << array[i] << " ";

	cout << endl;
}

enIsPrime CheckPrimeNum(int num)
{
	//او عملها بطريقة البوليان

	if (num <= 1)
		return enIsPrime::NotPrime;

	int M = round(sqrt(num));
	for (short i = 2; i <= M; i++)
	{
		if (num % i == 0)
			return enIsPrime::NotPrime;
	}

	return enIsPrime::Prime;
}

void CopyOnlyPrimeElementsInArray(int OriginalArray[], int array2[], int size, int& SizeOf2Array)
{
	short counter = 0;
	for (short i = 0; i < size; i++)
		if (CheckPrimeNum(OriginalArray[i]) == enIsPrime::Prime)
		{
			array2[counter] = OriginalArray[i];
			counter++;
		}

	SizeOf2Array = counter;
}

int main()
{
	srand((unsigned)time(NULL));

	int Array[100], Array2[100], Size = 0, SizeOf2Array = 0;
	FillArrayWithRandomNumbers(Array, Size);
	CopyOnlyPrimeElementsInArray(Array, Array2, Size, SizeOf2Array);

	cout << "\nArray 1 Elements:\n";
	PrintArray(Array, Size);
	cout << "\nPrime Numbers in 2 Array:\n";
	PrintArray(Array2, SizeOf2Array);
	return 0;
}