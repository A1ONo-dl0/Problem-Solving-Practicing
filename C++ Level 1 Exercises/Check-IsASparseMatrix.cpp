#include <iostream>
#include <string>
#include <cmath>
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
			Matrix[i][j] = GenerateRandomNumbers(0, 10);
		}
	}
}

void PrintMatrix(short Matrix[Rows][Cols], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf("%d ", Matrix[i][j]);
		}
		cout << endl;
	}
}

short CountNumberInMatrix(short Matrix[Rows][Cols], short Number, short Rows, short Cols)
{
	short CountOfNum = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix[i][j] == Number)
				CountOfNum++;
		}
	}

	return CountOfNum;
}

bool IsSparceMatrix(short Matrix[Rows][Cols], short Rows, short Cols)
{
	float MatrixSize = Rows * Cols;

	return (CountNumberInMatrix(Matrix, 0, Rows, Cols) >= ceil(MatrixSize / 2));
}

int main()
{
	srand((unsigned)time(NULL));

	short Matrix[Rows][Cols] = { {0,2,0},{2,0,4},{0,0,7} };

	//FillMatrixWithRandomNumbers(Matrix, Rows, Cols);

	cout << "The Matrix is :\n";
	PrintMatrix(Matrix, Rows, Cols);

	if (IsSparceMatrix(Matrix, Rows, Cols))
	{
		cout << "\nYes: is a Sparse Matrix\n";
	}
	else
	{
		cout << "\nNo: is Not a Sparse Matrix\n";

	}

	system("pause>0");

	return 0;
}