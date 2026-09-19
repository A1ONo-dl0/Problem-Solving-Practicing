#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
using namespace std;

const short Rows = 3;
const short Cols = 3;
const short Length = Rows * Cols;

short RandomNumbers(short from, short to)
{
	return rand() % (to - from + 1) + from;
}

void FillMatrixByRandomNumbers(short Matr[Rows][Cols], short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			Matr[i][j] = RandomNumbers(1, 100);
		}
	}
}

void PrintMatrix(short Matr[Rows][Cols], short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			printf("%02d ", Matr[i][j]);
		}
		cout << endl;
	}
}

void MultiableTwoMatrices(short MultiMatrix[Rows][Cols], short Matr[Rows][Cols], short Matr2[Rows][Cols], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			MultiMatrix[i][j] = Matr[i][j] * Matr2[i][j];
		}
		cout << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	short Matr[Rows][Cols];
	short Matr2[Rows][Cols];

	short MultiMatrix[Rows][Cols];

	FillMatrixByRandomNumbers(Matr, Rows, Cols);
	cout << "First Matrix :\n";
	PrintMatrix(Matr, Rows, Cols);

	FillMatrixByRandomNumbers(Matr2, Rows, Cols);
	cout << "Second Matrix :\n";
	PrintMatrix(Matr2, Rows, Cols);

	MultiableTwoMatrices(MultiMatrix, Matr, Matr2, Rows, Cols);
	cout << "Result of Multiable Two Matrices :\n";
	PrintMatrix(MultiMatrix, Rows, Cols);

	system("pause>0");

	return 0;
}