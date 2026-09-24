#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enWhatCharType { SmallLetter = 1, CapitalLetter = 2, SpecialLetter = 3, Digit = 4 };

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
	int Rand;
	Rand = rand() % (to - from + 1) + from;
	return Rand;
}

char GetRandomChar(enWhatCharType CharType)
{
	switch (CharType)
	{
	case enWhatCharType::SmallLetter:
		return char(RandomNumber(97, 122));
	case enWhatCharType::CapitalLetter:
		return char(RandomNumber(65, 90));
	case enWhatCharType::SpecialLetter:
		return char(RandomNumber(33, 47));
	case enWhatCharType::Digit:
		return char(RandomNumber(48, 57));
	}

	return '\0';
}

string GenerateWord(short Length, enWhatCharType CharType)
{
	string word;
	for (short i = 1; i <= Length; i++)
	{
		word = word + GetRandomChar(CharType);
	}

	return word;
}

string GenerateKey()
{
	short Length = 4;
	string Key = "";
	for (short i = 1; i <= 4; i++)
	{
		Key = Key + GenerateWord(Length, enWhatCharType::CapitalLetter);
		if (i < 4)
			Key = Key + "-";
	}

	return Key;
}

void GenerateKeys(int num)
{
	for (short i = 1; i <= num; i++)
	{
		cout << "\nKey [" << i << "] : " << GenerateKey();
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int Num = ReadPositiveNumber("How Many Keys to Generate?");
	GenerateKeys(Num);
	cout << endl;
	return 0;
}
