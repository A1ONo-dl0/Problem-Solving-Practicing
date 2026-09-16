#include <iostream>
using namespace std;

int ReadNumber()
{
	int num;
	cout << "Please, Enter a Number?\n";
	cout << "Enter: ";
	cin >> num;

	return num;
}

int ReadPowerToANum()
{
	int power;
	cout << "\nEnter a Power to That Number?\n";
	cout << "Enter: ";
	cin >> power;

	return power;
}

int CalculatePowerOfNum(int num, int power)
{
	int p = 1;
	for (short int i = 1; i <= power; i++)
	{
		p = p * num;
	}
	return p;
}

void PrintResult(int result)
{
	cout << "\nThe Result is = " << result << endl;
}

int main()
{
	int num, power;
	num = ReadNumber();
	power = ReadPowerToANum();
	int Result = CalculatePowerOfNum(num, power);
	PrintResult(Result);

	return 0;
}