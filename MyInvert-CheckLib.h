#pragma once
#include <iostream>
#include <cctype>
#include <cmath>
#include "MyGenerateLib.h";
using namespace std;

namespace MyInvertCheckLib
{
	char InvertCharacter(char c)
	{
		/*if (islower(c))
		{
			return char(toupper(c));
		}
		else
		{
			return char(tolower(c));
		}
		*/

		return islower(c) ? toupper(c) : tolower(c);
	}

	string InvertingAllStringLetters(string& str)
	{
		for (short i = 0; i < str.length(); i++)
		{
			str[i] = InvertCharacter(str[i]);
		}

		return str;
	}

	void ConverisonFirstLetterOfEachWordToUpper(string& str)
	{
		bool IsFirstLetter = true;

		for (short i = 0; i < str.length(); i++)
		{
			if (str[i] != ' ' && IsFirstLetter)
			{
				str[i] = toupper(str[i]);
			}
			IsFirstLetter = (str[i] == ' ' ? true : false);
		}
	}

	string ConverisonAllWordsOfStringToUpper(string& str)
	{
		for (short i = 0; i < str.length(); i++)
		{
			str[i] = toupper(str[i]);
		}
		return str;
	}

	string ConverisonAllWordsOfStringToLower(string& str)
	{
		for (short i = 0; i < str.length(); i++)
		{
			str[i] = tolower(str[i]);
		}
		return str;
	}

	bool IsBalindromeMatrix(short Matr[][100],short Rows, short Cols)
	{
		for (short i = 0; i < Rows; i++)
		{
			for (short j = 0; j < Cols / 2; j++)
			{
				if (Matr[i][j] != Matr[i][Cols - 1 - j])
					return false;
			}
		}
		return true;
	}

	bool CheckScalarMatrix(short Matrix[][100], short Rows, short Cols)
	{
		for (short i = 0;i < Rows; i++)
		{
			for (short j = 0; j < Cols; j++)
			{
				if (i == j)
				{
					if (Matrix[i][j] != Matrix[0][0])
						return false;
				}
				else if (Matrix[i][j] != 0)
				{
					return false;
				}
			}
		}

		return true;
	}

	bool IsNumberInMatrixExists(short Matrix[][100], short Rows, short Cols, short NumByUser)
	{
		for (short i = 0; i < Rows; i++)
		{
			for (short j = 0; j < Cols; j++)
			{
				if (Matrix[i][j] == NumByUser)
					return true;
			}
		}
		return false;
	}

	bool CheckArrayElementsIsPalidrome(int Array[], int Length)
	{
		for (short i = 0; i < Length / 2; i++)
		{
			if (Array[i] != Array[Length - 1 - i])
				return false;
		}

		return true;
	}

	bool CheckIdntityMatrix(short Matrix[][100], short Rows, short Cols)
	{
		for (short i = 0;i < Rows; i++)
		{
			for (short j = 0; j < Cols; j++)
			{
				if (i == j)
				{
					if (Matrix[i][j] != 1)
						return false;
				}
				else
				{
					if (Matrix[i][j] != 0)
						return false;
				}
			}
		}

		return true;
	}

	bool IsSparceMatrix(short Matrix[][100], short Rows, short Cols)
	{
		float MatrixSize = Rows * Cols;

		return (MyGenerateLib::CountNumberInMatrix(Matrix, Rows, Cols, 0) >= ceil(MatrixSize / 2));
	}

}