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

short UserInput()
{
	short num = 0;
	cout << "Enter you Looking For In Matrix\n";
	cout << "Enter: ";
	cin >> num;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "\nInvalid Input! , Please enter a valid number:\n";
		cout << "Enter: ";
		cin >> num;
	}

	return num;
}

bool IsNumberInMatrixExists(short Matrix[Rows][Cols], short NumByUser, short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix[i][j] == NumByUser)
				return true;
		}
	}
	return false;
}

int main()
{
	srand((unsigned)time(NULL));

	short Matrix[Rows][Cols];

	FillMatrixWithRandomNumbers(Matrix, Rows, Cols);

	cout << "The Matrix is :\n";
	PrintMatrix(Matrix, Rows, Cols);

	short NumByUser = UserInput();


	if (IsNumberInMatrixExists(Matrix, NumByUser, Rows, Cols))
	{
		cout << "\nYes: Number is Exists in Matrix \n";
	}
	else
	{
		cout << "\nNo: Number is Not Exists in Matrix\n";

	}

	system("pause>0");

	return 0;
}