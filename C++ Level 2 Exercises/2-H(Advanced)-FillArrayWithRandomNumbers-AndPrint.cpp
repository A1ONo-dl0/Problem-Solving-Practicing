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

void ReadArrayWithRandomNumbers(int array[], int& Size)
{
	Size = ReadPositiveNumber("Enter Size of Array?");

	for (short i = 0; i < Size; i++)
		array[i] = RandomNumber(1, 100);
}

void PrintArray(int array[], int Size)
{
	cout << "\nArray Elements: ";
	for (short i = 0; i < Size; i++)
		cout << array[i] << " ";

	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	int Array[100], Size;
	ReadArrayWithRandomNumbers(Array, Size);

	PrintArray(Array, Size);


	return 0;
}