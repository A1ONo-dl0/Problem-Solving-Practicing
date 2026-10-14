#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
using namespace std;

struct stClientRecord
{
	string AccountNum = "", PinCode = "", Name = "", Phone = "";
	double AccountBalance = 0;
};

void PrintTableHeader(vector <stClientRecord> vClient)
{
	cout << setw(59) << " Client List (" << vClient.size() << ") Client(s).\n" << endl;
	cout << string(120, char(196)) << endl;

	cout << "| " << setw(16) << left << "Account Number"
		<< "| " << setw(12) << left << "Pin Code"
		<< "| " << setw(35) << left << "Client Name"
		<< "| " << setw(15) << left << "Phone"
		<< "| " << setw(10) << left << "Balance" << " |" << endl;

	cout << string(120, char(196)) << endl;
}

vector <string> SaveClientRecordToVector(string Line, string delim)
{
	short pos = 0;
	string sWord = "";
	vector <string> vCleint;

	while ((pos = Line.find(delim)) != std::string::npos)
	{
		sWord = Line.substr(0, pos);
		if (sWord != "")
		{
			vCleint.push_back(sWord);
		}

		Line.erase(0, pos + delim.length());
	}

	if (Line != "")
		vCleint.push_back(Line);


	return vCleint;
}

stClientRecord SaveClientRecordToStruct(string Line, string FileName)
{
	stClientRecord stClient;
	vector <string> vClient;
	vClient = SaveClientRecordToVector(Line, "#//#");

	stClient.AccountNum = vClient[0];
	stClient.PinCode = vClient[1];
	stClient.Name = vClient[2];
	stClient.Phone = vClient[3];
	stClient.AccountBalance = stod(vClient[4]);

	return stClient;

}

void PrintCurrentLine(stClientRecord stClient)
{
	cout << "| " << setw(16) << left << stClient.AccountNum
		<< "| " << setw(12) << left << stClient.PinCode
		<< "| " << setw(35) << left << stClient.Name
		<< "| " << setw(15) << left << stClient.Phone
		<< "| " << setw(10) << left << stClient.AccountBalance << " |" << endl;
}

vector <stClientRecord> LoadDataFromFile(string FileName)
{
	fstream MyFile;
	string Line = "";

	vector <stClientRecord> vClient;
	stClientRecord stClient;

	MyFile.open(FileName, ios::in);

	if (MyFile.is_open())
	{
		while (getline(MyFile, Line))
		{
			if (Line != "")
			{
				stClient = SaveClientRecordToStruct(Line, "#//#");
				vClient.push_back(stClient);
			}
		}
	}
	MyFile.close();

	return vClient;
}

void PrintClientsSechdual(vector <stClientRecord> vClient, string FileName)
{
	PrintTableHeader(vClient);

	for (stClientRecord stClient : vClient)
	{
		PrintCurrentLine(stClient);
	}

	cout << "\n" << string(120, char(196)) << endl;

}

int main()
{
	vector <stClientRecord> vClient;

	vClient = LoadDataFromFile("MyFile.txt");

	PrintClientsSechdual(vClient, "MyFile.txt");

	system("pause>0");

	return 0;
}