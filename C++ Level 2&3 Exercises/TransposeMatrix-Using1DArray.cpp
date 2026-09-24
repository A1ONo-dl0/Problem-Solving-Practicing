#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
using namespace std;

const short Rows = 5;
const short Cols = 5;
const short Length = Rows * Cols;

short RandomNumbers(short from, short to)
{
	return rand() % (to - from + 1) + from;
}

void FillMatrixByOrderNumbers(short arr[Rows][Cols], short rows, short cols)
{
	short Counter = 1;
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			arr[i][j] = Counter;
			Counter++;
		}
	}
}

void StoreColumnsInto1DArray(short arr[Rows][Cols], short arr2[Length], short rows, short columns)
{
	short counter = 0;
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < columns; j++)
		{
			arr2[counter] = arr[j][i];
			counter++;
		}
	}
}

void TransposeTheMatrix(short arr[Rows][Cols], short arr2[Length], short rows, short columns)
{
	StoreColumnsInto1DArray(arr, arr2, rows, columns);

	short counter = 0;
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < columns; j++)
		{
			arr[i][j] = arr2[counter];
			counter++;
		}
	}
}

void PrintMatrix(short arr[Rows][Cols], short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			cout << setw(3) << arr[i][j] << "  ";
		}
		cout << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	short arr[Rows][Cols];
	short arr2[Length];

	FillMatrixByOrderNumbers(arr, Rows, Cols);

	cout << "\nMatrix Before :\n";
	PrintMatrix(arr, Rows, Cols);

	TransposeTheMatrix(arr, arr2, Rows, Cols);

	cout << "\nMatrix Before :\n";
	PrintMatrix(arr, Rows, Cols);

	system("pause>0");

	return 0;
}
