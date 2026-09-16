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

void FillArrayWithRandomNumber(int Array[], int Size)
{
	for (short i = 0; i < Size; i++)
		Array[i] = RandomNumber(1, 100);

}

void PrintArray(int Array[], int Size)
{
	for (short i = 0; i < Size; i++)
		cout << Array[i] << " ";

	cout << endl;
}

short int SearchForNumberInArray(int Array[], int Size, int Num)
{
	for (short i = 0; i < Size; i++)
	{
		if (Num == Array[i])
			return i;
	}

	return -999;
}

int main()
{
	srand((unsigned)time(NULL));

	int Size = ReadPositiveNumber("Enter Size of Aray?");
	int Array[100];
	FillArrayWithRandomNumber(Array, Size);
	PrintArray(Array, Size);
	int Num = ReadPositiveNumber("Please,Enter a Number to Search For?");
	short Index = SearchForNumberInArray(Array, Size, Num);

	cout << "\nNumber you are Looking for is: " << Num << "\n";
	if (Index == -999)
		cout << "The Number is Not Found :-(\n";
	else
	{
		cout << "The Number Found at Poition: " << Index << "\n";
		cout << "The Number Found at Order: " << Index + 1 << endl;
	}


	return 0;
}