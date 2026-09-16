#include <iostream>
#include <string>
using namespace std;

enum enResult { Pass = 1, Fail = 2 };

int REadgrade()
{
	short int grade;
	cout << "Please,Enter The grade?\n";
	cout << "Enter: ";
	cin >> grade;

	return grade;
}

enResult CheckResult(int grade)
{
	if (grade >= 50)
		return enResult::Pass;
	else
		return enResult::Fail;
}

void Printresult(enResult result)
{
	if (result == enResult::Pass)
		cout << "\nThe Result is: Passed" << endl;
	else
		cout << "\nThe Result is: Failed" << endl;
}

int main()
{
	Printresult(CheckResult(REadgrade()));

	return 0;
}