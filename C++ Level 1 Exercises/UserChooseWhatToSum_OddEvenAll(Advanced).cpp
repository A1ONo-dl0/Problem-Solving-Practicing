#include <iostream>
using namespace std;

enum enWhatToSum { Odd = 1, Even = 2, All = 3 };

int ReadNumber(int &n)
{
	cout << "Please, Enter Number to end by it?\n";
	cout << "Enter: ";
	cin >> n;

	return n;
}

enWhatToSum CheckNumType_OddOrEven(int num)
{
	if (num % 2 != 0)
		return enWhatToSum::Odd;
	else
		return enWhatToSum::Even;
}

enWhatToSum ChooseTypeOfSum()
{
	short int x;
	cout << "\nPlease, Enter Type of Summation?\n";
	cout << "(1) Odd\n" << "(2) Even\n" << "(3) All\n";
	cout << "Enter: ";
	cin >> x;

	return (enWhatToSum)x;
}

int ResultOfSum(int num, enWhatToSum option)
{
	int sum = 0;
	if (option == enWhatToSum::All)
		for (short int i = 1; i <= num; i++)
			sum += i;

	else if (option == enWhatToSum::Odd)
		for (short int i = 1; i <= num; i++)
			if (CheckNumType_OddOrEven(i) == enWhatToSum::Odd)
				sum += i;

	if (option == enWhatToSum::Even)
		for (short int i = 1; i <= num; i++)
			if (CheckNumType_OddOrEven(i) == enWhatToSum::Even)
				sum += i;


	return sum;
}

void PrintResult(int sum)
{
	cout << "\nThe Summation is = " << sum << endl;
}

int main()
{
	int n;
	int num = ReadNumber(n);
	enWhatToSum typeofsum = ChooseTypeOfSum();
	int ResultOfSummation = ResultOfSum(num, typeofsum);
	PrintResult(ResultOfSummation);

	return 0;
}