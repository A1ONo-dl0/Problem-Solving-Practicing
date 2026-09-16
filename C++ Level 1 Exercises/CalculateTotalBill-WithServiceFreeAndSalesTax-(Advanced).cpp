#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadNumber(string Message)
{
	float num;
	cout << Message << "\n";
	cout << "Enterr: ";
	cin >> num;

	return num;
}

float ServiceFee(float Bill)
{
	return Bill * 0.10;
}

float SalesTax(float AfterServiceFee)
{
	return AfterServiceFee * 0.16;
}

float CalculateTotalBill(float Bill)
{
	float TotalBill = Bill + ServiceFee(Bill) + SalesTax(Bill + ServiceFee(Bill));
	return TotalBill;
}

int main()
{
	float Bill = ReadNumber("Please,Enter The Bill Value?");
	float TheServiceFee = ServiceFee(Bill);
	float SalesTaxValue = SalesTax(Bill + TheServiceFee);

	cout << "\nService Fee: " << ServiceFee(Bill) << "\n";
	cout << "\nSales Tax: " << SalesTaxValue << endl;
	cout << "\nThe Total Bill is = " << CalculateTotalBill(Bill) << endl;

	return 0;
}