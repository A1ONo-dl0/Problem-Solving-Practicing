#include <iostream>
using namespace std;

int ReadTotalSales()
{
	int t;
	cout << "Please,Enter The Total Sales?\n";
	cout << "Enter: ";
	cin >> t;

	return t;
}

float CheckCommissionPer(float t)
{
	if (t > 1000000)
		return 0.01;
	else if (t >= 500000 && t <= 1000000)
		return 0.02;
	else if (t >= 100000 && t < 500000)
		return 0.03;
	else if (t >= 50000 && t < 100000)
		return 0.05;
	else
		return 0.00;

}

float CalculateCommissionPercentage(int Tsales)
{
	return CheckCommissionPer(Tsales) * Tsales;
}

int main()
{
	int Total_Sales = ReadTotalSales();
	cout << "\nCommission Percentage: " << CheckCommissionPer(Total_Sales) << endl;
	cout << "\nThe Total Commission: " << CalculateCommissionPercentage(Total_Sales) << endl;

	return 0;
}