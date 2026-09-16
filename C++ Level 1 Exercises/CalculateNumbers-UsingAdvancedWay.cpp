#include <iostream>
using namespace std;
const int n = 3;

enum enresult { Passed = 1, Failed = 2 };

void ReadNumbers(int sum3num[])
{
	cout << "Please,Enter 3 Number To Count Them:-\n";
	for (short int i = 0; i < n; i++)
	{
		cout << "Enter: ";
		cin >> sum3num[i];
	}

}

int Sumofnumbers(int sum3num[])
{
	int Totalsum = 0;
	for (short int i = 0; i < n; i++)
	{
		Totalsum += sum3num[i];
	}
	return Totalsum;
}

float CalculateAverage(int Tsum)
{
	return (float)Tsum / n;
}

enresult CheckAverage(float Average)
{
	if (Average >= 50)
		return enresult::Passed;
	else
		return
		enresult::Failed;
}

void PrintResult(float Average, enresult Result)
{
	cout << "\nYour Avergae is: " << Average << endl;
	if(Result == enresult::Passed)
	cout << "\nThe Result is: Passed " << endl;
	else
		cout << "\nThe Result is: Failed " << endl;
}

int main()
{
	int sum3num[n];
	ReadNumbers(sum3num);
	float Average = CalculateAverage(Sumofnumbers(sum3num));
	enresult Result = CheckAverage(Average);
	PrintResult(Average, Result);

	return 0;
}