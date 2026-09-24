#include <iostream>
#include <string>
using namespace std;

int ReadNumber(string Message)
{
	int num;

	cout << Message << "\n";
	cout << "Enter: ";
	cin >> num;

	return num;
}

void FillArray(int Array[], int& ArrayLeanth)
{
	int Num = ReadNumber("Please,Enter a Number?");
	Array[ArrayLeanth] = Num;
	ArrayLeanth++;
}

void UserInputNumbersInArray(int Array[], int& ArrayLeanth)
{
	bool Choise = true;
	do
	{
		FillArray(Array, ArrayLeanth);
		cout << "\nDo you Want to Add More Numbers?\n";
		cout << "[0] No" << ", [1] Yes\n";
		cout << "Enter: ";
		cin >> Choise;
		cout << "\n";
	} while (Choise);
}

void PrintArrayElements(int Array[], int Leanth)
{
	cout << "Array Elements: ";
	for (short i = 0; i < Leanth; i++)
		cout << Array[i] << " ";

	cout << endl;
}

int main()
{
	int Array[100];
	int ArrayLeanth = 0;
	UserInputNumbersInArray(Array, ArrayLeanth);

	cout << "\nArray Lenth: " << ArrayLeanth << "\n";
	PrintArrayElements(Array, ArrayLeanth);

	return 0;
}
