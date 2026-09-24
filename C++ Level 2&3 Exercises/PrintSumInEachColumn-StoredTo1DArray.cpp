#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
using namespace std;

short RandomNumbers(short from, short to)
{
	return rand() % (to - from + 1) + from;
}

void FillMatrixWithRandomNums(short arr[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			arr[i][j] = RandomNumbers(1, 100);
		}
	}
}

void PrintMatrix(short arr[3][3], short rows, short cols)
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

short FindSumInTargetColumn(short TargetColumn, short arr[3][3], short rows)
{
	short sum = 0;
	for (short i = 0; i < rows; i++)
	{
		sum += arr[i][TargetColumn];
	}

	return sum;
}

void StoreSumOfEachColumnInto1dArray(short arr[3][3], short ArrColsSum[3], short rows, short columns)
{
	for (short i = 0; i < columns; i++)
	{
		ArrColsSum[i] = FindSumInTargetColumn(i, arr, rows);
	}
}

void PrintSumOfEachColumnThatisStoredInto1DArray(short ArrColsSum[3], short length)
{

	cout << "\nPrint Summation Of Each Column Stored In 1D Array :\n";
	for (short TargetColumn = 0; TargetColumn < length; TargetColumn++)
	{
		cout << "Sum in Column " << TargetColumn + 1 << " : " << ArrColsSum[TargetColumn] << endl;
	}
}



int main()
{
	srand((unsigned)time(NULL));

	short arr[3][3];
	short ArrColsSum[3];

	FillMatrixWithRandomNums(arr, 3, 3);

	PrintMatrix(arr, 3, 3);

	StoreSumOfEachColumnInto1dArray(arr, ArrColsSum, 3, 3);

	PrintSumOfEachColumnThatisStoredInto1DArray(ArrColsSum, 3);

	system("pause>0");

	return 0;
}
