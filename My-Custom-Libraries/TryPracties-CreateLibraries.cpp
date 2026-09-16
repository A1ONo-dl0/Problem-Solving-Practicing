#include <iostream>
#include <cstdlib>
#include <ctime>
#include "MyMainLib1.h";
using namespace std;
const short r = 5, c = 5;


int main()
{
	srand((unsigned)time(NULL));

	short Arr[50][50];

	MyInputLib::ReadMatrix(Arr, r, c);
	MyPrintLib::PrintArray2DElements(Arr, r, c);
	cout << "\n\n" << MyGenerateLib::GenerateKey(5, 4, 65, 90) << endl;
	cout << "\n" << MyGenerateLib::GeneratePassword(14, 65, 122) << endl;


	return 0;
}