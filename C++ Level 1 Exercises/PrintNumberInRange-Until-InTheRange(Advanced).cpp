#include <iostream>
using namespace std;

int ReadNumbers()
{
	int Age;
	cout << "Please,Enter The Age?\n";
	cout << "Age: ";
	cin >> Age;

	return Age;
}

bool CheckVaildNumberInRange(int from, int to, int Age)
{
	return (Age >= from && Age <= to);
}

int ReadUntilNumberInRange(int from, int to)
{
	int Age;
	do
	{
		Age = ReadNumbers();
		if (!CheckVaildNumberInRange(from, to, Age))
		{
			cout << "\nWrong input! The age must be between " << from << " and " << to << ".\n\n";
		}
	} while (!CheckVaildNumberInRange(from, to, Age));

	return Age;
}

void PrintResult(int Age)
{
	cout << "\n" << Age << " is a Valid Age." << endl;
}

int main()
{
	PrintResult(ReadUntilNumberInRange(18, 45));

	return 0;
}