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
			cout << "\nWrong,Please Enter a Positive Number.\n\n";
	} while (num <= 0);

	return num;
}

short int RandomNumber(int from, int to)
{
	short RandNum = rand() % (to - from + 1) + from;
	return RandNum;
}

void FillArrayWithRandomNumber(int Array[], int Leanth)
{
	for (short i = 0; i < Leanth; i++)
		Array[i] = RandomNumber(1, 100);
}

void AddArrayElements(int Num, int Array2[], int& Leanth2)
{
	Array2[Leanth2] = Num;
	Leanth2++;
}

void CopyArrayElementsUsingAddArrayElements(int Array[], int Array2[], int Leanth, int& Leanth2)
{
	for (short i = 0; i < Leanth; i++)
	{
		AddArrayElements(Array[i], Array2, Leanth2);
	}
}

void PrintArrayElements(int Array[], int Leanth)
{
	for (short i = 0; i < Leanth; i++)
		cout << Array[i] << " ";

	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	int Array[100], Array2[100];
	int ArrayLeanth = ReadPositiveNumber("Please,Enter Size of Array?");
	int Array2Leanth = 0;
	FillArrayWithRandomNumber(Array, ArrayLeanth);
	CopyArrayElementsUsingAddArrayElements(Array, Array2, ArrayLeanth, Array2Leanth);

	cout << "\nArray 1 Elements: \n";
	PrintArrayElements(Array, ArrayLeanth);

	cout << "\nArray 2 Elements: \n";
	PrintArrayElements(Array2, Array2Leanth);

	return 0;
}