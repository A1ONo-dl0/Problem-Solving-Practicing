#include <iostream>
#include <string>
using namespace std;

float ReadNumber(string Message)
{
	float num;
	cout << Message << "\n";
	cout << "Enter: ";
	cin >> num;

	return num;
}

float CalculatePayRemainder(float TotalBill, float TheCash)
{
	return TheCash - TotalBill;
}

int main()
{
	float TotalBill = ReadNumber("Please,Enter Total Bill?");
	float TheCash = ReadNumber("Please,Enter Cash?");
	cout << "\n*****************************\n";
	cout << "Total Bill: " << TotalBill;
	cout << "\nThe Cash Paid: " << TheCash;
	cout << "\n*****************************\n";
	cout << "\nThe Remainder is = " << CalculatePayRemainder(TotalBill, TheCash) << endl;

	return 0;
}