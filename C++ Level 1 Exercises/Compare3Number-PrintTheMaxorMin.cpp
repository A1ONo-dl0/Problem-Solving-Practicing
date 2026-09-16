#include <iostream>
using namespace std;

//او نقدر نستخدم ارري

void ReadNumbers(int& num1, int& num2, int& num3)
{
	cout << "Please,Enter Three Numbers?\n";
	cout << "Enter: ";
	cin >> num1;
	cout << "Enter: ";
	cin >> num2;
	cout << "Enter: ";
	cin >> num3;
}

int Checkmaxnumber(int num1, int num2, int num3)
{
	if (num1 > num2)
		if (num1 > num3)
			return num1;
		else
			return num3;

	else if (num2 > num3)
		return num2;
	else
		return num3;
}

void Printmaxnumber(int max)
{
	cout << "\nThe Maximum Number is: " << max << endl;
}

int main()
{
	int num1, num2, num3;
	ReadNumbers(num1, num2, num3);
	int maximumnum = Checkmaxnumber(num1, num2, num3);
	Printmaxnumber(maximumnum);
	return 0;
}