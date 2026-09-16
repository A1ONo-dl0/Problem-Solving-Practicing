#include <iostream>
using namespace std;

struct stPiggyBankContent
{
	int Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBankContent ReadPiggyBankContent()
{
	stPiggyBankContent coin;
	cout << "Please,Enter How Many Coins?\n";
	cout << "Pennies: ";
	cin >> coin.Pennies;
	cout << "Nickles: ";
	cin >> coin.Nickels;
	cout << "Dimes: ";
	cin >> coin.Dimes;
	cout << "Quarters: ";
	cin >> coin.Quarters;
	cout << "Dollars: ";
	cin >> coin.Dollars;

	return coin;
}

int CalculateTotalPennies(stPiggyBankContent coin)
{
	int TP = (coin.Pennies * 1) + (coin.Nickels * 5) + (coin.Dimes * 10) + (coin.Quarters * 25) + (coin.Dollars * 100);
	return TP;
}

int main()
{
	stPiggyBankContent ReadCoins = ReadPiggyBankContent();
	int TotalPennies = CalculateTotalPennies(ReadCoins);
	cout << "\nTotal Pennies: " << TotalPennies << "\n";
	cout << "\nTotal Dollars: " << (float)TotalPennies / 100 << endl;

	return 0;
}