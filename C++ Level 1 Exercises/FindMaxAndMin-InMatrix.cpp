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

void FillMatrixWithRandomNumbers(short Matrix[Rows][Cols], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Matrix[i][j] = GenerateRandomNumbers(0, 100);
		}
	}
}

void PrintMatrix(short Matrix[Rows][Cols], short Rows, short Cols)
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

short FindMaxNumInMatrix(short Matr[Rows][Cols], short Rows, short Cols)
{
	short Max = Matr[0][0];
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matr[i][j] > Max)
				Max = Matr[i][j];
		}
	}

	return Max;
}

short FindMinNumInMatrix(short Matr[Rows][Cols], short Rows, short Cols)
{
	short Min = Matr[0][0];
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matr[i][j] < Min)
				Min = Matr[i][j];
		}
	}

	return Min;
}

int main()
{
	srand((unsigned)time(NULL));

	short Matrix[Rows][Cols];

	FillMatrixWithRandomNumbers(Matrix, Rows, Cols);
	cout << "The Matrix is :\n";
	PrintMatrix(Matrix, Rows, Cols);

	cout << "\nMaximum Number in Matrix is : " << FindMaxNumInMatrix(Matrix, Rows, Cols) << endl;
	cout << "\nMinimum Number in Matrix is : " << FindMinNumInMatrix(Matrix, Rows, Cols) << endl;

	system("pause>0");

	return 0;
}