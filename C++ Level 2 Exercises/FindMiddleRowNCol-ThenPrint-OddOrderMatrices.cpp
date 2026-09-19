#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
using namespace std;

const short Rows = 5;
const short Cols = 5;

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

void PrintMiddleRow(short Matr[Rows][Cols], short Rows, short Cols)
{
	short Mid = (Rows / 2) + 0.5;
	for (short i = 0; i < Rows; i++)
	{
		if (Mid == i)
		{
			for (short j = 0; j < Cols; j++)
			{
				printf("%02d ", Matr[i][j]);
			}
			cout << endl;
		}
	}
}

void PrintMiddleCol(short Matr[Rows][Cols], short Rows, short Cols)
{
	short Mid = (Cols / 2) + 0.5;

	for (short j = 0; j < Cols; j++)
	{
		if (Mid == j)
		{
			for (short i = 0; i < Rows; i++)
			{
				printf("%02d\n", Matr[i][j]);
			}
		}
	}
}


int main()
{
	srand((unsigned)time(NULL));

	short Matr[Rows][Cols];

	FillMatrixByRandomNumbers(Matr, Rows, Cols);

	cout << "The Matrix is :\n";
	PrintMatrix(Matr, Rows, Cols);

	cout << "\nMiddle Row of Matrix :\n";
	PrintMiddleRow(Matr, Rows, Cols);

	cout << "\nMiddle Columns of Matrix :\n";
	PrintMiddleCol(Matr, Rows, Cols);

	system("pause>0");

	return 0;
}