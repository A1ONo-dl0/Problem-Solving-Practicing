#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
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
	for (short i = 0; i < Size; i++)
		cout << array[i] << " ";

	cout << endl;
}

void CopyArray(int OriginalArray[], int array2[], int size)
{
	for (short i = 0; i < size; i++)
		array2[i] = OriginalArray[i];
}


int main()
{
	srand((unsigned)time(NULL));

	int Array[100], Array2[100], Size;
	FillArrayWithRandomNumbers(Array, Size);
	CopyArray(Array, Array2, Size);

	cout << "\nArray 1 Elements:\n";
	PrintArray(Array, Size);
	cout << "\nArray 2 Elements After copy:\n";
	PrintArray(Array2, Size);

	return 0;
}
