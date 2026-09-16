#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enWhatChar { SmallLetter = 1, CapitalLetter = 2, SpecialLetter = 3, Digit = 4 };

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

char CheckCharType(enWhatChar CharType)
{
	switch (CharType)
	{
	case enWhatChar::SmallLetter:
		return char(RandomNumber(97, 122));
	case enWhatChar::CapitalLetter:
		return char(RandomNumber(65, 90));
	case enWhatChar::SpecialLetter:
		return char(RandomNumber(33, 47));
	case enWhatChar::Digit:
		return char(RandomNumber(48, 57));
	}

	return '\0';
}

string GenerateWord()
{
	string word = "";
	for (short i = 1; i <= 4; i++)
		word = word + CheckCharType(enWhatChar::CapitalLetter);

	return word;
}

string GenerateKye(int KeyLenth)
{
	string Key = "";
	for (short i = 1; i <= KeyLenth; i++)
	{
		Key = Key + GenerateWord();
		if (i < KeyLenth)
			Key = Key + "-";
	}

	return Key;
}

void FillArrayWithKyes(string array[], int Size, int KeyLenth)
{

	for (short i = 0; i < Size; i++)
		array[i] = GenerateKye(KeyLenth);

}

void PrintArray(string array[], int Size)
{

	for (short i = 0; i < Size; i++)
		cout << "Array[" << i << "] : " << array[i] << "\n";

	cout << endl;
}


int main()
{
	srand((unsigned)time(NULL));

	string Array[100];
	int Size = ReadPositiveNumber("Enter Size of Array?");
	int KeyLenth = ReadPositiveNumber("Enter Lenth of Key?");

	FillArrayWithKyes(Array, Size, KeyLenth);

	cout << "\nArray Elements:\n";
	PrintArray(Array, Size);


	return 0;
}