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

void FillArrayWithRandomNumbers(int array[], int Size)
{

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

void SumOf1And2Arrays(int array1[], int array2[], int arraysum[], int size)
{
	for (short i = 0; i < size; i++)
		arraysum[i] = array1[i] + array2[i];
}

int main()
{
	srand((unsigned)time(NULL));

	int Array[100], Array2[100], ArraySum[100];
	int Size = ReadPositiveNumber("Enter Size of Array?");

	FillArrayWithRandomNumbers(Array, Size);
	FillArrayWithRandomNumbers(Array2, Size);
	SumOf1And2Arrays(Array, Array2, ArraySum, Size);

	cout << "\nArray 1 Elements:\n";
	PrintArray(Array, Size);
	cout << "\nArray 2 Elemnets:\n";
	PrintArray(Array2, Size);
	cout << "\nSum of array1 and array2 elements:\n";
	PrintArray(ArraySum, Size);

	return 0;
}