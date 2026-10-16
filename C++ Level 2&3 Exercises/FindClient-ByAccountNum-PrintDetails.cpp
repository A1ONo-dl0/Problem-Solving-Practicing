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

string ReadAccountNumber(const string& message)
{
	string s = "";
	cout << message << "\n";
	cout << "Enter :";

	cin >> s;

	return s;
}

vector <string> SplitString(string Line, string Seperator)
{
	short pos = 0;
	string sWord = "";


	vector <string> vClient;
	while ((pos = Line.find(Seperator)) != std::string::npos)
	{
		sWord = Line.substr(0, pos);
		if (sWord != "")
			vClient.push_back(sWord);

		Line.erase(0, pos + Seperator.length());
	}

	if (Line != "")
		vClient.push_back(Line);

	return vClient;
}

stClientRecord ConvertLineToRecord(string& Line, stClientRecord& stClient)
{
	vector <string> vClient;
	vClient = SplitString(Line, "#//#");

	stClient.AccountNum = vClient[0];
	stClient.PinCode = vClient[1];
	stClient.Name = vClient[2];
	stClient.Phone = vClient[3];
	stClient.AccountBalance = stod(vClient[4]);

	return stClient;

}

vector <stClientRecord> LoadDataFromFileToVector(string FileName)
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
				vClient.push_back(ConvertLineToRecord(Line, stClient));
			}
		}
		MyFile.close();
	}

	return vClient;
}

bool IsAccountNumberExist(string& An, stClientRecord& stClient, string FileName)
{
	vector <stClientRecord> vClient;
	vClient = LoadDataFromFileToVector(FileName);

	for (stClientRecord CliRec : vClient)
	{
		if (An == CliRec.AccountNum)
		{
			stClient = CliRec;
			return true;
		}
	}
	return false;
}

void PrintClientDetails(string& An, string FileName)
{
	stClientRecord stClient;
	if (IsAccountNumberExist(An, stClient, FileName))
	{
		cout << "\nThe Following are The Client Details :\n\n";

		cout << "Account Number   :" << stClient.AccountNum << "\n";
		cout << "Pin Code         :" << stClient.PinCode << "\n";
		cout << "Name             :" << stClient.Name << "\n";
		cout << "Phone            :" << stClient.Phone << "\n";
		cout << "AccouBalance     :" << stClient.AccountBalance << endl;
	}
	else
	{
		cout << "\nClient With Account Number " << An << " Not Found !" << endl;
	}
}

int main()
{
	string An = ReadAccountNumber("Please, Enter Account Number?");
	stClientRecord stClient;

	PrintClientDetails(An, "ClientsInfo.txt");

	system("pause>0");

	return 0;
}