#include <iostream>
#include <string>
using namespace std;

string readuserName()
{
	string Ne;
	cout << "Please,Enter Your Name: ";
	getline(cin, Ne);

	return Ne;
}

void PrintuserName(string Ne)
{
	cout << "\nyour Name is: " << Ne << endl;
}

int main()
{

	PrintuserName(readuserName());

	return 0;
}