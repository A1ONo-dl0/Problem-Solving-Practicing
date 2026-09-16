#include <iostream>
#include <string>
#include <iomanip>
using namespace std;



int main()
{
	cout << string(15, char(196)) << "|" << string(30, char(196)) << "|" << string(15, char(196)) << "|\n";
	cout << "     Code      |             Name             |      Mark     |\n";
	cout << string(15, char(196)) << "|" << string(30, char(196)) << "|" << string(15, char(196)) << "|\n";

	cout << setw(16) << "c101|" << setw(31) << "Programing Level 1|" << setw(17) << "79|\n";
	cout << setw(16) << "c102|" << setw(31) << "Computer Hardware|" << setw(17) << "85|\n";
	cout << setw(16) << "c103|" << setw(31) << "English|" << setw(17) << "96|\n";
	cout << setw(16) << "c104|" << setw(31) << "Math|" << setw(17) << "82|\n";
	cout << setw(16) << "c105|" << setw(31) << "Humanity|" << setw(17) << "88|\n";
	cout << setw(16) << "c106|" << setw(31) << "Introduction to Programming|" << setw(17) << "76|\n";
	cout << setw(16) << "c107|" << setw(31) << "Programing Level 2|" << setw(17) << "89|\n";
	cout << setw(16) << "c108|" << setw(31) << "Data Structure|" << setw(17) << "83|\n";
	cout << setw(16) << "c109|" << setw(31) << "Logical Digit|" << setw(17) << "84|\n";
	cout << setw(16) << "c1010|" << setw(31) << "Acadimc Writing Skills|" << setw(17) << "77|\n";

	return 0;
}