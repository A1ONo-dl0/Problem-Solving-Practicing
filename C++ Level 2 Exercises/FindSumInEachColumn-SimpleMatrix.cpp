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

void PrintSumOfEachColumn(short arr[3][3], short rows, short columns)
{
	for (short TargetColumn = 0; TargetColumn < columns; TargetColumn++)
	{
		cout << "Sum of Column " << TargetColumn + 1 << " = " << FindSumInTargetColumn(TargetColumn, arr, rows) << endl;
	}
}



int main()
{
	srand((unsigned)time(NULL));

	short arr[3][3];

	FillMatrixWithRandomNums(arr, 3, 3);

	PrintMatrix(arr, 3, 3);

	PrintSumOfEachColumn(arr, 3, 3);

	return 0;
}
