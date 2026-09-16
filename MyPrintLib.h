#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace MyPrintLib
{
	void PrintTableHeader()
	{
		cout << "\n\n\t\t\tMultiplication from 1 to 10\n" << endl;

		for (short int i = 1; i <= 10; i++)
			cout << "\t" << i;
		cout << "\n" << string(91,(char)196) << endl;
	}

	string ColumnSeparator(short int i)
	{
		if (i < 10)
			return "   |";
		else
			return"  |";
	}

	void PrintMultiplicationTable()
	{
		PrintTableHeader();

		for (short int i = 1; i <= 10; i++)
		{
			cout << " " << i << ColumnSeparator(i) << "\t";
			for (short int j = 1; j <= 10; j++)
			{
				cout << j * i << "\t";
			}
			cout << endl;
		}
	}

	void PrintSeparator(short length, char symbol = '-')
	{
		cout << "\n" << string(length, symbol) << "\n";
	}

	void PrintArray1DElementsLikeRow(short Arr[], short length)
	{
		for (short i = 0; i < length; i++)
		{
			cout << Arr[i] << "  ";
		}
		cout << endl;
	}

	void PrintArray1DElementsLikeColumn(short Arr[], short length)
	{
		for (short i = 0; i < length; i++)
		{
			cout << Arr[i] << "\n";
		}
		cout << endl;
	}

	void PrintArray2DElements(short Arr[][50],short r,short c)
	{
		cout << "\nThe Matrix : \n";
		for (short i = 0; i < r; i++)
		{
			for (short j = 0; j < c; j++)
				cout << Arr[i][j] << "   ";

			cout << "\n";
		}
	}

	void printMainDiagonal(short a[][50],short n)
	{
		cout << "\nMain Daigonal : " << endl;
		for (short int i = 0; i < n; i++)
		{
			for (short int j = 0; j < n; j++)
				if (i == j)
					cout << a[i][j] << " ";
				else
					cout << "  ";

			cout << endl;
		}
	}

	void printMinorDiagonal(short a[][50],short n)
	{
		cout << "\nMainor Daigonal : " << endl;

		for (short int i = 0; i < n; i++)
		{
			for (short int j = 0; j < n; j++)
				if (i + j == n - 1)
					cout << a[i][j] << " ";
				else
					cout << "  ";

			cout << endl;
		}
	}
}