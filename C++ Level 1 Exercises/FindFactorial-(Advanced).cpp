#include <iostream>
using namespace std;

int ReadPositiveNum(string message) //هنا نطبق مبدأ Reuse ability
{
	int n;
	do
	{
		cout << message << "Enter: ";
		cin >> n;
		if (n < 0)
			cout << "\nWrong it should be > 0\n\n";
	} while (n < 0);


	return n;
}

int FindFact(int num)
{
	int fact = 1;
	for (short int i = 1; i <= num; i++)
	{
		fact *= i;
	}
	return fact;
}

void PrintResult(int Fact)
{
	cout << "\nThe Factorial is = " << Fact << endl;
}

int main()
{
	int num = ReadPositiveNum("Please, Enter a Positive Number To Find The Factorial?\n");
	PrintResult(FindFact(num));
	return 0;
}