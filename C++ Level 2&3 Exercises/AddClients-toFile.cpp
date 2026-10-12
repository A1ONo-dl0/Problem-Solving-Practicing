#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

struct stClient
{
	string AccountNum = "", PinCode = "", Name = "", Phone = "";
	double AccountBalance = 0;
};

stClient ReadClientRecord()
{
	stClient Record;

	cout << "\nEnter Account Number? :";
	getline(cin >> ws, Record.AccountNum);

	cout << "Enter PinCode? :";
	getline(cin, Record.PinCode);

	cout << "Entert Name? :";
	getline(cin, Record.Name);

	cout << "Enter Phone? :";
	getline(cin, Record.Phone);

	cout << "Enter Account Balance? :";
	cin >> Record.AccountBalance;

	return Record;
}

vector <string> ConvertClinetRecord(stClient ClientRecord)
{
	vector <string> vcr;
	vcr.push_back(ClientRecord.AccountNum);
	vcr.push_back(ClientRecord.PinCode);
	vcr.push_back(ClientRecord.Name);
	vcr.push_back(ClientRecord.Phone);
	vcr.push_back(to_string(ClientRecord.AccountBalance));

	return vcr;
}

string JoinString(vector <string> vClinetRecord, string Seperator)
{
	string str = "";
	for (string& s : vClinetRecord)
	{
		str += s + Seperator;
	}
	return str.substr(0, str.length() - Seperator.length());
}

void SaveDataToFile(vector <string>& vClinetRecord, string FileName)
{
	fstream MyFile;
	string str = JoinString(vClinetRecord, "#//#");

	MyFile.open("MyOwnFile.txt", ios::out | ios::app);

	if (MyFile.is_open())
	{
		MyFile << str << endl;
		MyFile.close();
	}
}

void AddNewClint()
{
	stClient ClientRecord;
	vector <string> vClientRecord;

	ClientRecord = ReadClientRecord();
	vClientRecord = ConvertClinetRecord(ClientRecord);
	SaveDataToFile(vClientRecord, "MyOwnFile.txt");
}

void AddClients()
{
	char c = 'Y';

	do
	{
		system("cls");
		cout << "Adding New Client :" << endl;

		AddNewClint();

		cout << "\nClient Added Successfully, do you want to add more clients? Y/N :";
		cin >> c;

		do
		{
			if (c != 'y' && c != 'n' && c != 'Y' && c != 'N')
			{
				cout << "\n\nWrong Input!, Please Enter a Right One...";
			}
			else
				break;

			cin >> c;

		} while (c != 'y' && c != 'n' && c != 'Y' && c != 'N');

	} while (c == 'Y' || c == 'y');
}

int main()
{

	AddClients();

	system("pause>0");

	return 0;
}