#include <iostream>
#include <string>
using namespace std;

void PrintWordsFromAAAToZZZ()
{
	for (short i = 65; i <= 90; i++)
	{
		for (short m = 65; m <= 90; m++)
		{
			for (short j = 65; j <= 90; j++)
			{
				cout << (char)i << char(m) << char(j) << endl;
			}
		}
		cout << "\n----------------------------------------------\n";
	}

}

int main()
{
	PrintWordsFromAAAToZZZ();

	return 0;
}