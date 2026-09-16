#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int num;
	do
	{
		cout << Message << "\n";
		cout << "Enter: ";
		cin >> num;
		if (num <= 0)
			cout << "\nWrong,Please Enter a Positive Number.\n\n";
	} while (num <= 0);

	return num;
}

int CountDigitFrequency(int num, int CheckDigit)
{
	int Remainder = 0;
	int  FreqDigit = 0;
	while (num > 0)
	{
		Remainder = num % 10;
		num = num / 10;
		if (Remainder == CheckDigit)
			FreqDigit++;
	}

	return FreqDigit;
}

void PrintAllDigitFrequency(int num)
{
	/*الرقم مهما كان حجمه فهو عبارة عن من 0 الى 9
	* فنمشي من 0 الى 9
	* وندز اول شي 0 نشوف كم مرة متكرر وال1 وهكذا الى ال9 من الرقم المدخل
	* وهيج رح ينطبع بس الخانة المكرر ادخالها من قبل المستخدم عن طريق فور لوب
	* لأن دندز كل الارقام الموجودة ويطب
	*/

	for (short i = 0; i < 10; i++)
	{
		short DigitFreq = 0;
		DigitFreq = CountDigitFrequency(num, i);
		if (DigitFreq > 0)
			cout << "\nDigit " << i << " Frequency is " << DigitFreq << " Times" << endl;
	}
}

int main()
{
	int Number = ReadPositiveNumber("Please,Enter a Number?");
	PrintAllDigitFrequency(Number);

	return 0;
}