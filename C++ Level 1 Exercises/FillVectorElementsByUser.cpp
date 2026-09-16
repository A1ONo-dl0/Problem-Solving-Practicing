#include <iostream>
#include <limits>
#include <vector>
using namespace std;

enum enAnswer { Yes = 1, No = 2 };

short ReadNumber(const string& Message)
{
	short num;
	cout << Message << "\n";
	cout << "Enter: ";
	cin >> num;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "\nInvalid Input!, Please Enter a Vailed One.\n\n";
		cout << "Enter: ";
		cin >> num;
	}

	return num;
}

enAnswer CheckAnswer()
{
	short Ans = 0;
	do
	{
		cout << "\nDo you Want to Add More Numbers?\n";
		cout << "[1] Yes , [2] No\n";
		cout << "Enter: ";
		cin >> Ans;

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			cout << "\nInvalid Input!, Please Enter a Vailed One.\n\n";
			cout << "Enter: ";
			cin >> Ans;
		}

		if (Ans != 1 && Ans != 2)
			cout << "\nWrong Input!, Please Enter Right Answer.\n\n";
	} while (Ans != 1 && Ans != 2);

	cout << "\n";

	return enAnswer(Ans);
}

void FillVectore(vector <short int>& vNumbers)
{
	short num = 0;
	do
	{
		num = ReadNumber("Enter a Number?");
		vNumbers.push_back(num);

	} while (CheckAnswer() == enAnswer::Yes);
}

void PrintVectoreElements(vector <short int>& vNumbers)
{
	cout << "\nVector Numbers : ";
	for (short& Number : vNumbers)
	{
		cout << Number << " ";
	}
	cout << endl;
}

int main()
{
	vector <short int> vNumbers;

	FillVectore(vNumbers);
	PrintVectoreElements(vNumbers);

	return 0;
}