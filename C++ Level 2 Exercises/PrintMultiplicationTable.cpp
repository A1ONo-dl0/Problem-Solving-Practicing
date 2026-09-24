#include <iostream>
using namespace std;

void PrintTableHeader()
{
	cout << "\n\n\t\t\tMultiplication from 1 to 10\n" << endl;

	for (short int i = 1; i <= 10; i++)
		cout << "\t" << i;
	cout << "\n-----------------------------------------------------------------------------------------" << endl;
}

string ColumnSeparator(short int i)
{
	if (i < 10)
		return "   |";
	else
		return"  |";
}

void PrintMultiplicationTable()
{
	for (short int i = 1; i <= 10; i++)
	{
		cout << " " << i << ColumnSeparator(i) << "\t";
		for (short int j = 1; j <= 10; j++)
		{
			cout << j * i << "\t";
		}
		cout << endl;
	}
}

int main()
{
	PrintTableHeader();
	PrintMultiplicationTable();
	return 0;
}
