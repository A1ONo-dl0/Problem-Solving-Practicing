#include <vector>
#include <iostream>
using namespace std;

struct stEmpolyees
{
	string firstname = "", lastname = "";
	float salary = 0;
};

stEmpolyees FillEmpolyeesInfo()
{
	stEmpolyees EmpolyeInfo;

	cout << "First Name: ";
	cin >> EmpolyeInfo.firstname;
	cout << "Last Name: ";
	cin >> EmpolyeInfo.lastname;
	cout << "Salary: ";
	cin >> EmpolyeInfo.salary;

	return EmpolyeInfo;
}

void AddEmpolyessInfo(vector <stEmpolyees>& vEmpolyInf)
{
	char Contin = 'Y';
	do
	{
		//اسهل للاختصار
		//اي بدل ان نسوي متغير في المين ونمرره بالمرجع لدالتين,بس مجرد نسوي تعبئة للمتغيرات بدالة اخرى
		//وتكون من نوع ستركجر لترجع نفس النوع لان الفيكتور من النوع ستركجر حتى نخرن فيه البيانات
		//ونحقن البيانات مباشرة في الفيكتور
		//بدل استخدام متغير في المين من نوع ستركجر ونمرره بين الدوال بالمرجع,هكذا اختصار اكثر

		vEmpolyInf.push_back(FillEmpolyeesInfo());

		cout << "\nMore Empolyes? Y/N : ";
		cin >> Contin;
		if (Contin != 'Y' && Contin != 'N' && Contin != 'y' && Contin != 'n')
			do
			{
				cout << "\nWrong Input, Enter Right Answer!\n";
				cout << "Y/N : ";
				cin >> Contin;
			} while (Contin != 'Y' && Contin != 'N' && Contin != 'y' && Contin != 'n');
		cout << "\n";
	} while (Contin == 'Y' || Contin == 'y');
}

void PrintEmpolyeesInfo(vector <stEmpolyees>& vEmpolyInf)
{
	cout << string(23, char(196)) << "{Empolyees Info}" << string(23, char(196)) << "\n";
	cout << endl;
	for (const stEmpolyees& Empoly : vEmpolyInf)
	{
		cout << "First Name :"<< Empoly.firstname << "\n";
		cout << "LastName   :"<< Empoly.lastname << "\n";
		cout << "Salary     :"<< Empoly.salary << "\n";
		cout << "\n";
	}
	cout << string(62, char(196)) << endl;
}

int main()
{
	vector <stEmpolyees> vEmpolyInf;

	AddEmpolyessInfo(vEmpolyInf);

	PrintEmpolyeesInfo(vEmpolyInf);

	return 0;
}