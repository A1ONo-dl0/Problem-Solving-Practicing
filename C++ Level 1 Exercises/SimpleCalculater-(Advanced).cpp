#include <iostream>
using namespace std;

enum enOperationType { Add = '+', Subtract = '-', Multibly = '*', Divide = '/' };

struct stNum
{
	int num1, num2;
};

 int ReadNumber(string message)
{
	int Number = 0;
	cout <<message<< "\n";
	cout << "Enter: ";
	cin >> Number;

	return Number;
}

enOperationType ReadOperation()
{
	char a;
	do
	{
		cout << "Enter:\n";
		cout << "(+)\n" << "(-)\n" << "(*)\n" << "(/)\n" << "Choose: ";
		cin >> a;
		if (a != '+' && a != '-' && a != '*' && a != '/')
			cout << "\nWrong,Enter a Correct Operation.\n\n";

	} while (a != '+' && a != '-' && a != '*' && a!='/');

	return (enOperationType)a;
}

double Calculater(stNum Number, enOperationType OpT)
{
	switch (OpT)
	{
		case enOperationType::Add:  return Number.num1 + Number.num2;
		case enOperationType::Subtract: return Number.num1 - Number.num2;
		case enOperationType::Multibly:  return Number.num1 * Number.num2;
		case enOperationType::Divide:  return (double)Number.num1 / Number.num2;
		default:
			return 0;
	}
}

void PrintResult(double Result)
{
	cout << "\n= " << Result << endl;
}

int main()
{
	stNum stReadNum;
	stReadNum.num1 = ReadNumber("First Number?");
	stReadNum.num2 = ReadNumber("Second Number?");
	enOperationType stReadOperation = ReadOperation();
	double Result = Calculater(stReadNum,stReadOperation);
	PrintResult(Result);

	return 0;
}