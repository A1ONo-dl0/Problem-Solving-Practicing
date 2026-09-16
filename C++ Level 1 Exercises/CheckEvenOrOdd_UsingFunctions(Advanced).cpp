#include <iostream>
#include <string>
using namespace std;

enum enNumbertype { Odd = 1, Even = 2 };

int readnumb()
{
	int num;
	cout << "Please,Enter a number to check?\n";
	cout << "Enter: ";
	cin >> num;
	return num;
}

enNumbertype checknumbertype(int num)
{
	if (num % 2 == 0)
		return enNumbertype::Even;
	else
		return enNumbertype::Odd;
}

void PrintNumbertype(enNumbertype numbertype)
{
	if (numbertype == enNumbertype::Even)
		cout << "\nThe Number is Even." << endl;
	else
		cout << "\nThe Number is odd." << endl;
}

int main()
{
	PrintNumbertype(checknumbertype(readnumb()));
	return 0;
}