#include <iostream>
using namespace std;

short int ReadGrade()
{
	short int g;
	do
	{
		cout << "Please,Enter The Grade?\n";
		cout << "Enter: ";
		cin >> g;
		if (g < 0 || g > 100)
			cout << "\nWrong,Enter Right Grade.\n\n";
	} while (g < 0 || g > 100);

	return g;
}

char CheckGrade(short int grade)
{
	if (grade >= 90 && grade <= 100)
		return 'A';
	else if (grade >= 80 && grade <= 89)
		return 'B';
	else if (grade >= 70 && grade <= 79)
		return 'C';
	else if (grade >= 60 && grade <= 69)
		return 'D';
	else if (grade >= 50 && grade <= 59)
		return 'E';
	else
		return 'F';
}

void PrintGrade(char grade)
{
	cout << "\nThe Grade is: " << grade << endl;
	if (grade == 'F')
		cout << "You Failed" << endl;
	else
		cout << "You Passed" << endl;
}

int main()
{
	short int Grade = ReadGrade();
	char Checkgr = CheckGrade(Grade);
	PrintGrade(Checkgr);

	return 0;
}