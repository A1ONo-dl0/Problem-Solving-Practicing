#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

namespace MyGenerateLib
{
	short int GenerateRandomNumbers(short from, short to)
	{
		short RandNum = rand() % (to - from + 1) + from;
		return RandNum;
	}

	char GenerateRandomCharacters(short from, short to)
	{
		short RandNum = rand() % (to - from + 1) + from;
		return char(RandNum);
	}

	string GenerateWord(short length,short from, short to)
	{
		string Word = "";
		for (short i = 1; i <= length; i++)
		{
			Word = Word + GenerateRandomCharacters(from, to);
		}

		return Word;
	}

	string GenerateKey(short keylength,short wordlength, short from, short to)
	{
		string W = "";
		for (short i = 1; i <= keylength; i++)
		{
			W = W + GenerateWord(wordlength, from, to);
			if (i < keylength)
				W = W + "-";
		}

		return W;
	}

	string GeneratePassword(short PasswordLength, short from, short to)
	{
			return GenerateWord(PasswordLength, from, to);
	}

}