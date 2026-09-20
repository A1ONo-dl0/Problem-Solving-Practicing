#include <iostream>
#include <string>
using namespace std;

const short Rows = 3;
const short Cols = 3;

void FillMatrixByUser(short Matrix[Rows][Cols], short Rows, short Cols)
{
	cout << "Enter Elements For The Matrix :\n";
	for (short i = 0; i < Rows; i++)
	{
		cout << "Enter ELements for row " << i + 1 << " : ";
		for (short j = 0; j < Cols; j++)
		{
			cin >> Matrix[i][j];
		}
	}
}

void PrintMatrix(short Matrix[Rows][Cols], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf("%02d ", Matrix[i][j]);
		}
		cout << endl;
	}
}

bool CheckScalarMatrix(short Matrix[Rows][Cols], short Rows, short Cols)
{
	for (short i = 0;i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (i == j)
			{
				if (Matrix[i][j] != Matrix[i][i])
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


int main()
{
	short Matrix[Rows][Cols];

	FillMatrixByUser(Matrix, Rows, Cols);

	cout << "The Matrix is :\n";
	PrintMatrix(Matrix, Rows, Cols);


	if (CheckScalarMatrix(Matrix, Rows, Cols))
	{
		cout << "\nYes: Matrix is Scalar\n";
	}
	else
	{
		cout << "\nNo: Mattrix is Not Scalar" << endl;
	}

	system("pause>0");

	return 0;
}