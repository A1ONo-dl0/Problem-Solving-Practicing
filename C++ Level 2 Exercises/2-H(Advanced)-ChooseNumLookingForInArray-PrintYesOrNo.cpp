#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enFoundOrNot { Found = 1, NotFound = 2 };

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

int RandomNumber(int from, int to)
{
	int RandNum = rand() % (to - from + 1) + from;
	return RandNum;
}

void FillArrayWithRandomNumber(int Array[], int Size)
{
	for (short i = 0; i < Size; i++)
		Array[i] = RandomNumber(1, 100);

}

void PrintArray(int Array[], int Size)
{
	for (short i = 0; i < Size; i++)
		cout << Array[i] << " ";

	cout << endl;
}

int SearchForNumberInArray(int Array[], int Size, int Num)
{
	for (short i = 0; i < Size; i++)
	{
		if (Num == Array[i])
			return i;
	}

	return -999;
}

/*enFoundOrNot IsNumberInArray(int Array[], int Size, int Num)
{
	//عملها اينم او بوليان عادي مع بعض التعديل على الشرط في المين
	if (SearchForNumberInArray(Array, Size, Num) == -999)
		return enFoundOrNot::NotFound;
	else
		return enFoundOrNot::Found;
}
*/

bool IsNumberInArray(int Array[], int Size, int Num)
{
	return SearchForNumberInArray(Array, Size, Num) != -999;

	//بدل كتابة اف ايلس مجرد نكتب سطر واحد كافي
	//معناه رجع ترو القيمة الي ترجع من الفانكشن هذي اذا كانت القيمة لاتساوي سالب999
	//اذا ماتساوي رجع ترو اذا تحقق وشافها بالعكس تساوي رح يرجع فولس
}

int main()
{
	srand((unsigned)time(NULL));

	int Size = ReadPositiveNumber("Enter Size of Aray?");
	int Array[100];
	FillArrayWithRandomNumber(Array, Size);
	PrintArray(Array, Size);
	int Num = ReadPositiveNumber("Please,Enter a Number to Search For?");

	cout << "\nNumber you are Looking for is: " << Num << "\n";
	if (!IsNumberInArray(Array, Size, Num))
		cout << "No,The Number is Not Found :-(" << endl;
	else
		cout << "yes,The Number is Found :-)" << endl;



	return 0;
}