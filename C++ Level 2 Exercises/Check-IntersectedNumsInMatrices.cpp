#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const short Rows = 3;
const short Cols = 3;

short GenerateRandomNumbers(short from, short to)
{
	return rand() % (to - from + 1) + from;
}

void FillMatrixWithRandomNumbers(short Matrix[Rows][Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Matrix[i][j] = GenerateRandomNumbers(0, 10);
		}
	}
}

void PrintMatrix(short Matrix[Rows][Cols])
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout << setw(2) << Matrix[i][j] << "  ";
		}
		cout << endl;
	}
}

bool IsAlreadyPrinted(short Matrix[Rows][Cols], short Num, short CurrentRow, short CurrentCol)
{
	for (short i = 0; i <= CurrentRow; i++)
	{
		short endCol = (i == CurrentRow) ? CurrentCol : Cols;

		for (short j = 0; j < endCol; j++)
		{
			if (Matrix[i][j] == Num)
				return true;
		}
	}
	return false;
}

bool IsNumberIntersectedBetween2Matrices(short Num, short Matr2[Rows][Cols])
{

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matr2[i][j] == Num)
				return true;
		}
	}

	return false;
}

void PrintIntersectedNumsInMatrices(short Matr1[Rows][Cols], short Matr2[Rows][Cols])
{
	cout << "\nIntersected Numbers are : ";
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (IsNumberIntersectedBetween2Matrices(Matr1[i][j], Matr2))
			{
				if (!IsAlreadyPrinted(Matr1, Matr1[i][j], i, j))
					cout << setw(2) << Matr1[i][j] << "  ";
			}
		}
	}

}

int main()
{
	srand((unsigned)time(NULL));

	short Matrix[Rows][Cols];
	short Matrix2[Rows][Cols];


	FillMatrixWithRandomNumbers(Matrix);
	cout << "Matrix 1 is :\n";
	PrintMatrix(Matrix, Rows, Cols);

	FillMatrixWithRandomNumbers(Matrix2);
	cout << "Matrix 2 is :\n";
	PrintMatrix(Matrix2, Rows, Cols);

	PrintIntersectedNumsInMatrices(Matrix, Matrix2);

	system("pause>0");

	return 0;
}
