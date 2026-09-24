#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const short Rows = 3;
const short Cols = 3;

void FillMatrixByUser(short Matrix[Rows][Cols])
{
	cout << "Enter Elements to The Matrix :\n";
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cin >> Matrix[i][j];
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

bool IsBalindromeMatrix(short Matr[Rows][Cols])
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols/2; j++)
		{
			if (Matr[i][j] != Matr[i][Cols - 1 - j])
				return false;
		}
	}
	return true;
}

int main()
{
	short Matrix[Rows][Cols];

	FillMatrixByUser(Matrix);
	cout << "\nThe Matrix is :\n";
	PrintMatrix(Matrix);

	if (IsBalindromeMatrix(Matrix))
		cout << "\nYes: it is a Balindrome Matrix" << endl;
	else
		cout << "\nNo: it is Not a Balindrome Matrix" << endl;


	system("pause>0");

	return 0;
}
