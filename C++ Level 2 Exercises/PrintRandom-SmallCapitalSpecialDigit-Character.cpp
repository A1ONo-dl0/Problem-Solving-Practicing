#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enWhatChar { SmallLetter = 1, CapitalLetter = 2, SpecialChar = 3, Digit = 4 };

int RandomNumber(int From, int To)
{
	int Rand = rand() % (To - From + 1) + From;
	return Rand;
}

char GetRandomCharacter(enWhatChar CharType)
{
	switch (CharType)
	{
	case enWhatChar::SmallLetter:
		return char(RandomNumber(97, 122));
	case enWhatChar::CapitalLetter:
		return char(RandomNumber(65, 90));
	case enWhatChar::SpecialChar:
		return char(RandomNumber(33, 47));
	case enWhatChar::Digit:
		return char(RandomNumber(48, 57));
	}

	return '\0';
}

int main()
{
	srand((unsigned)time(NULL));

	cout << GetRandomCharacter(enWhatChar::SmallLetter) << "\n";
	cout << GetRandomCharacter(enWhatChar::CapitalLetter) << "\n";
	cout << GetRandomCharacter(enWhatChar::SpecialChar) << "\n";
	cout << GetRandomCharacter(enWhatChar::Digit) << "\n";
	return 0;
}
